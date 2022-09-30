package org.vpinball;

import java.io.BufferedReader;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.util.HashMap;
import java.util.LinkedHashMap;

import org.vpinball.Param.ParamType;

public class DispatchParser {
	public void parse(String in, String out) throws Exception {
		HashMap<String, String> hashmap = new HashMap<String, String>();

		hashmap.put("ICollection", "Collection");
		hashmap.put("ICollectionEvents", "");
		hashmap.put("ITable", "PinTable");
		hashmap.put("ITableGlobal", "ScriptGlobalTable");
		hashmap.put("ITableEvents", "");
		hashmap.put("IVPDebug", "DebuggerModule");
		hashmap.put("IWall", "Surface");
		hashmap.put("IWallEvents", "");
		hashmap.put("IControlPoint", "DragPoint");
		hashmap.put("IFlipper", "Flipper");
		hashmap.put("IFlipperEvents", "");
		hashmap.put("ITimer", "Timer");
		hashmap.put("ITimerEvents", "");
		hashmap.put("IPlunger", "Plunger");
		hashmap.put("IPlungerEvents", "");
		hashmap.put("ITextbox", "Textbox");
		hashmap.put("ITextboxEvents", "");
		hashmap.put("IBumper", "Bumper");
		hashmap.put("IBumperEvents", "");
		hashmap.put("ITrigger", "Trigger");
		hashmap.put("ITriggerEvents", "");
		hashmap.put("ILight", "Light");
		hashmap.put("ILightEvents", "");
		hashmap.put("IKicker", "Kicker");
		hashmap.put("IKickerEvents", "");
		hashmap.put("IDecal", "Decal");
		hashmap.put("IPrimitive", "Primitive");
		hashmap.put("IPrimitiveEvents", "");
		hashmap.put("IHitTarget", "HitTarget");
		hashmap.put("IHitTargetEvents", "");
		hashmap.put("IGate", "Gate");
		hashmap.put("IGateEvents", "");
		hashmap.put("ISpinner", "Spinner");
		hashmap.put("ISpinnerEvents", "");
		hashmap.put("IRamp", "Ramp");
		hashmap.put("IFlasher", "Flasher");
		hashmap.put("IRubber", "Rubber");
		hashmap.put("IBall", "BallEx");
		hashmap.put("IRampEvents", "");
		hashmap.put("IFlasherEvents", "");
		hashmap.put("IRubberEvents", "");
		hashmap.put("IDispReel", "DispReel");
		hashmap.put("IDispReelEvents", "");
		hashmap.put("ILightSeq", "LightSeq");
		hashmap.put("ILightSeqEvents", "");

		FileOutputStream outputStream = new FileOutputStream(in);
		outputStream.write("#include \"stdafx.h\"\n\n".getBytes());

		BufferedReader reader = new BufferedReader(new FileReader(out));

		int lineNo = 0;
		String line = reader.readLine();

		boolean start = false;

		String className = "";
		int id = 1000;

		LinkedHashMap<String, Dispatch> map = new LinkedHashMap<String, Dispatch>();

		while (line != null) {
			lineNo++;

			line = line.trim();

			if (line.indexOf(" : public IDispatch") != -1) {
				className = line.split(":")[0].trim();

				start = true;
			}

			if (!start) {
				line = reader.readLine();

				continue;
			}

			if (line.equals("};")) {
				String newClass = hashmap.get(className);

				if (newClass != null && newClass.length() > 0) {
					outputStream.write(generateClass(newClass, map).getBytes());
				}

				start = false;
				id = 1000;
				map.clear();
			}

			int index = line.indexOf("HRESULT STDMETHODCALLTYPE ");

			if (index != -1) {
				int startLineNo = lineNo;

				String complete = "";

				if (!line.endsWith(" = 0;")) 
				{
					String end;
					complete = line;

					do {
						end = reader.readLine().trim();
						complete += end;
						lineNo++;
					} while (!end.endsWith(" = 0;"));
				}
				else {

					complete = line;
				}

				Function function = new Function(complete, startLineNo);

				if (map.containsKey(function.getId())) {
					Dispatch dispatch = map.get(function.getId());
					dispatch.addFunction(function);
				}
				else {
					Dispatch dispatch = new Dispatch();
					dispatch.setKey(function.getId());
					dispatch.addFunction(function);

					if (!dispatch.is_NewEnum()) {
						dispatch.setId(id++);
					}			

					map.put(dispatch.getKey(), dispatch);
				}
			}

			line = reader.readLine();
		}

		reader.close();

		outputStream.close();
	}

	private String generateClass(String className, LinkedHashMap<String, Dispatch> dispatchMap) throws Exception {
		StringBuffer buffer = new StringBuffer();

		buffer.append("STDMETHODIMP " + className + "::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {\n");
		buffer.append("char szName[MAXSTRING];\n");
		buffer.append("WideCharToMultiByteNull(CP_ACP, 0, *rgszNames, -1, szName, MAXSTRING, nullptr, nullptr);\n");

		int index = 0;

		for (String key : dispatchMap.keySet()) {
			Dispatch dispatch = dispatchMap.get(key);

			if (dispatch.getId() == - 4) {
				continue;
			}

			if (index > 0) {
				buffer.append("else ");
			}

			buffer.append("if (!lstrcmpi(szName, \""+ key + "\")) {\n");
			buffer.append("*rgDispId = " + dispatch.getId() + ";\n");
			buffer.append("}\n");

			index++;
		}

		if (index > 0) {
			buffer.append("else {\n");
			buffer.append("return DISP_E_UNKNOWNNAME;\n");
			buffer.append("}\n");
		}

		buffer.append("return S_OK;\n");
		buffer.append("}\n");

		buffer.append("\n");


		buffer.append("STDMETHODIMP " + className + "::Invoke(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) {\n");
		buffer.append("switch(dispIdMember) {\n");

		for (String key : dispatchMap.keySet()) {
			Dispatch dispatch = dispatchMap.get(key);

			if (dispatch.getFunctionCount() == 1) {
				if (dispatch.is_NewEnum()) {
					buffer.append("case DISPID_NEWENUM: {\n");
				}
				else {
					buffer.append("case " + dispatch.getId() + ": {\n");
				}

				buffer.append(generateFunction(dispatch.getFunction(0)));
				buffer.append("}\n");
				buffer.append("\n");
			}
			else {
				buffer.append("case " + dispatch.getId() + ":\n");
				buffer.append("switch(pDispParams->cArgs) {\n");
				for (Function function:dispatch.getFunctionList()) {
					buffer.append("case " + function.getCArgs() + ": {\n");
					buffer.append(generateFunction(function));
					buffer.append("}\n");
					buffer.append("\n");
				}
				buffer.append("default:\n");
				buffer.append("break;\n");
				buffer.append("}\n");

				buffer.append("break;\n");
				buffer.append("\n");
			}
		}

		buffer.append("default:\n");
		buffer.append("break;\n");
		buffer.append("}\n");

		buffer.append("\n");

		buffer.append("return DISP_E_UNKNOWNNAME;\n");
		buffer.append("}\n");

		buffer.append("\n");		

		return indent(buffer.toString());
	}

	private String generateHeaderVariant(int index, Param param, String type, Function function) {
		StringBuffer buffer = new StringBuffer();

		buffer.append("CComVariant var" + index);
		if (param.hasDefaultValue()) {
			buffer.append("(" + param.getDefaultValue() + ")");
		}
		buffer.append(";\n");

		if (type != null) {
			buffer.append("VariantChangeType(&var" + index + ", ");

			if (param.hasDefaultValue() || param.isOptional()) {
				buffer.append("(index > 0) ? &pDispParams->rgvarg[--index] : &var" + index);
			}
			else {
				if (function.getCArgs() > 1) {
					buffer.append("&pDispParams->rgvarg[--index]");
				}
				else {
					buffer.append("pDispParams->rgvarg");
				}
			}

			buffer.append(", 0, " + type + ");\n");
		}
		else {
			if (param.hasDefaultValue() || param.isOptional()) {
				buffer.append("if (index > 0) {\n");
				buffer.append("VariantCopy(&var" + index + ",  &pDispParams->rgvarg[--index]);\n");
				buffer.append("}\n");
			}
			else {
				buffer.append("VariantCopy(&var" + index + ", pDispParams->rgvarg);\n");
			}
		}

		return buffer.toString();
	}

	private String generateFunction(Function function) {
		StringBuffer buffer = new StringBuffer();

		buffer.append("return " + function.getName() + "(");

		int index = 0;

		StringBuffer header = new StringBuffer();

		if (function.hasDefaultValueParams() || function.hasOptionalParams() || function.getCArgs() > 1) {
			header.append("int index = pDispParams->cArgs;\n");
		}

		for (Param param : function.getParamList()) {
			if (index > 0) {
				buffer.append(", ");
			}

			if (param.getParamType() == ParamType.IN) {
				if ("int".equals(param.getType())) {
					header.append(generateHeaderVariant(index, param, "VT_I4", function));
					buffer.append("V_I4(&var" + index + ")");
				}
				else if ("long".equals(param.getType())) {
					header.append(generateHeaderVariant(index, param, "VT_I4", function));
					buffer.append("V_I4(&var" + index + ")");
				}
				else if ("float".equals(param.getType())) {
					header.append(generateHeaderVariant(index, param, "VT_R4", function));
					buffer.append("V_R4(&var" + index + ")");
				}
				else if ("VARIANT_BOOL".equals(param.getType())) {
					header.append(generateHeaderVariant(index, param, "VT_BOOL", function));
					buffer.append("V_BOOL(&var" + index + ")");
				}
				else if ("BSTR".equals(param.getType())) {
					header.append(generateHeaderVariant(index, param, "VT_BSTR", function));
					buffer.append("V_BSTR(&var" + index + ")");
				}
				else if ("VARIANT*".equals(param.getType())) { 
					header.append(generateHeaderVariant(index, param, null, function));
					buffer.append("&var" + index );
				}
				else if ("VARIANT".equals(param.getType())) { 
					header.append(generateHeaderVariant(index, param, "VT_VARIANT", function));
					buffer.append("var" + index);
				}
				else if ("OLE_COLOR".equals(param.getType())) {
					header.append(generateHeaderVariant(index, param, "VT_UI4", function));
					buffer.append("(OLE_COLOR)V_UI4(&var" + index + ")");
				}	
				else if ("UserDefaultOnOff".equals(param.getType())
						|| "FXAASettings".equals(param.getType())
						|| "PhysicsSet".equals(param.getType())
						|| "BackglassIndex".equals(param.getType())
						|| "ImageAlignment".equals(param.getType())
						|| "PlungerType".equals(param.getType()) 
						|| "TextAlignment".equals(param.getType()) 
						|| "TriggerShape".equals(param.getType())
						|| "LightState".equals(param.getType()) 
						|| "KickerType".equals(param.getType()) 
						|| "DecalType".equals(param.getType()) 
						|| "SizingType".equals(param.getType()) 
						|| "TargetType".equals(param.getType()) 
						|| "GateType".equals(param.getType()) 
						|| "RampType".equals(param.getType()) 
						|| "RampImageAlignment".equals(param.getType())
						|| "SequencerState".equals(param.getType())) {
					header.append(generateHeaderVariant(index, param, "VT_I4", function));
					buffer.append("(" + param.getType() + ")V_I4(&var" + index + ")");
				}
				else if ("IFontDisp*".equals(param.getType())) {
					// FIX ME
					buffer.append("(IFontDisp*)pDispParams->rgvarg");
				}
				else if ("void".equals(param.getType())) {
				}
				else {
					buffer.append(param.getType());
				}
			}
			else if (param.getParamType() == ParamType.OUT) {
				if ("VARIANT*".equals(param.getType())) { 
					if (function.hasDefaultValueParams() ||function.hasOptionalParams() || function.getCArgs() > 1) {
						header.append("VARIANT* var" + index + " = &pDispParams->rgvarg[--index];\n");

						buffer.append("var" + index);
					}
					else {

						buffer.append("pDispParams->rgvarg");
					}
				}
				else {
					buffer.append(param.getType());
				}
			}
			else if (param.getParamType() == ParamType.RETVAL_OUT) {
				if ("int*".equals(param.getType())) {
					buffer.insert(0, "V_VT(pVarResult) = VT_I4;\n");
					buffer.append("&V_I4(pVarResult)");
				}
				else if ("float*".equals(param.getType())) {
					buffer.insert(0, "V_VT(pVarResult) = VT_R4;\n");
					buffer.append("&V_R4(pVarResult)");
				}
				else if ("long*".equals(param.getType())) {
					buffer.insert(0, "V_VT(pVarResult) = VT_I4;\n");
					buffer.append("(long*)&V_I4(pVarResult)");
				}
				else if ("VARIANT_BOOL*".equals(param.getType())) {
					buffer.insert(0, "V_VT(pVarResult) = VT_BOOL;\n");
					buffer.append("&V_BOOL(pVarResult)");
				}
				else if ("BSTR*".equals(param.getType())) {
					buffer.insert(0, "V_VT(pVarResult) = VT_BSTR;\n");
					buffer.append("&V_BSTR(pVarResult)");
				}
				else if ("OLE_COLOR*".equals(param.getType())) {
					buffer.insert(0, "V_VT(pVarResult) = VT_UI4;\n");
					buffer.append("&V_UI4(pVarResult)");
				}
				else if ("VARIANT*".equals(param.getType())) {
					buffer.append("pVarResult");
				}
				else if ("SIZE_T*".equals(param.getType())) {
					buffer.insert(0, "V_VT(pVarResult) = VT_UI4;\n");
					buffer.append("(SIZE_T*)&V_UI4(pVarResult)");
				}
				else if ("IUnknown**".equals(param.getType())) {
					buffer.insert(0, "V_VT(pVarResult) = VT_UNKNOWN;\n");
					buffer.append("&V_UNKNOWN(pVarResult)");
				}
				else if ("SAFEARRAY**".equals(param.getType())
						|| "IBall**".equals(param.getType())
						|| "IFontDisp**".equals(param.getType())
						|| "ITable**".equals(param.getType())
						|| "IDispatch**".equals(param.getType())) {
					buffer.insert(0, "V_VT(pVarResult) = VT_DISPATCH;\n");
					buffer.append("(" + param.getType() + ")&V_DISPATCH(pVarResult)");
				}
				else if ("UserDefaultOnOff*".equals(param.getType())
						|| "FXAASettings*".equals(param.getType())
						|| "PhysicsSet*".equals(param.getType())
						|| "BackglassIndex*".equals(param.getType())
						|| "ImageAlignment*".equals(param.getType())
						|| "PlungerType*".equals(param.getType())
						|| "TextAlignment*".equals(param.getType())
						|| "TriggerShape*".equals(param.getType())
						|| "LightState*".equals(param.getType())
						|| "KickerType*".equals(param.getType())
						|| "DecalType*".equals(param.getType())
						|| "SizingType*".equals(param.getType())
						|| "TargetType*".equals(param.getType())
						|| "GateType*".equals(param.getType())
						|| "RampType*".equals(param.getType())
						|| "RampImageAlignment*".equals(param.getType())) {
					buffer.insert(0, "V_VT(pVarResult) = VT_I4;\n");
					buffer.append("(" + param.getType() + ")&V_I4(pVarResult)");
				}
				else {
					buffer.append(param.getType());
				}
			}

			index++;
		}

		buffer.append(");\n");

		if (function.hasRetvalOutParam()) {
			String varResult = "";
			varResult += "if (pVarResult == NULL) {\n";
			varResult += "VARIANT valResult;\n";
			varResult += "VariantInit(&valResult);\n";
			varResult += "pVarResult = &valResult;\n";
			varResult += "}\n";

			header.insert(0, varResult);
		}

		buffer.insert(0, header.toString());

		buffer.insert(0, "// line " + function.getLineNo() + ": " + function.getLine() + "\n");

		return buffer.toString();
	}

	private String indent(String code) throws Exception {
		StringBuffer buffer = new StringBuffer();

		int indent = 0;
		boolean newLine = false;

		for (int i = 0; i < code.length(); i++) {
			char character = code.charAt(i);

			if (character == '\n') {
				newLine = true;
				buffer.append(character);
			}
			else {
				if (character == '{') {
					indent++;
				}
				else if (character == '}') {
					indent--;
				}

				if (newLine) {
					newLine = false;
					for (int index = 0; index < indent; index++) {
						buffer.append("\t");
					}
				}

				buffer.append(character);
			}
		}

		return buffer.toString();		
	}


	public static void main(String[] args) throws Exception {
		DispatchParser parser = new DispatchParser();
		parser.parse("/Users/jmillard/vpvr/vpinball_osx.cpp", "/Users/jmillard/vpvr/vpinball_osx.h");
	}
}
