package org.vpinball;

import java.io.BufferedReader;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;

import org.vpinball.Param.ParamType;

public class DispatchParser {
	public void parse(String in, String out) throws Exception {
		HashMap<String, String> hashmap = new HashMap<String, String>();
		ArrayList<Event> eventList = new ArrayList<Event>();
		
		hashmap.put("ICollection", "Collection");
		hashmap.put("ICollectionEvents", "Collection");
		
		hashmap.put("ITable", "PinTable");
		hashmap.put("ITableEvents", "PinTable");
		
		hashmap.put("ITableGlobal", "ScriptGlobalTable");
		
		hashmap.put("IWall", "Surface");
		hashmap.put("IWallEvents", "Surface");
		
		hashmap.put("IControlPoint", "DragPoint");
		
		hashmap.put("IFlipper", "Flipper");
		hashmap.put("IFlipperEvents", "Flipper");
		
		hashmap.put("ITimer", "Timer");
		hashmap.put("ITimerEvents", "Timer");
		
		hashmap.put("IPlunger", "Plunger");
		hashmap.put("IPlungerEvents", "Plunger");
		
		hashmap.put("ITextbox", "Textbox");
		hashmap.put("ITextboxEvents", "Textbox");
		
		hashmap.put("IBumper", "Bumper");
		hashmap.put("IBumperEvents", "Bumper");
		
		hashmap.put("ITrigger", "Trigger");
		hashmap.put("ITriggerEvents", "Trigger");
		
		hashmap.put("ILight", "Light");
		hashmap.put("ILightEvents", "Light");
		
		hashmap.put("IKicker", "Kicker");
		hashmap.put("IKickerEvents", "Kicker");
		
		hashmap.put("IPrimitive", "Primitive");
		hashmap.put("IPrimitiveEvents", "Primitive");
		
		hashmap.put("IHitTarget", "HitTarget");
		hashmap.put("IHitTargetEvents", "HitTarget");
		
		hashmap.put("IGate", "Gate");
		hashmap.put("IGateEvents", "Gate");
		
		hashmap.put("ISpinner", "Spinner");
		hashmap.put("ISpinnerEvents", "Spinner");
		
		hashmap.put("IRamp", "Ramp");
		hashmap.put("IRampEvents", "Ramp");
		
		hashmap.put("IFlasher", "Flasher");
		hashmap.put("IFlasherEvents", "Flasher");
		
		hashmap.put("IRubber", "Rubber");
		hashmap.put("IRubberEvents", "Rubber");
		
		hashmap.put("IDispReel", "DispReel");
		hashmap.put("IDispReelEvents", "DispReel");
		
		hashmap.put("ILightSeq", "LightSeq");
		hashmap.put("ILightSeqEvents", "LightSeq");
		
		hashmap.put("IVPDebug", "DebuggerModule");
		hashmap.put("IDecal", "Decal");
		hashmap.put("IBall", "BallEx");

		FileOutputStream outputStream = new FileOutputStream(in);
		outputStream.write("#include \"stdafx.h\"\n\n".getBytes());

		BufferedReader reader = new BufferedReader(new FileReader("/Users/jmillard/vpvr/vpinball.idl"));

		int lineNo = 0;
		String line = reader.readLine();
		boolean start = false;
		String className = "";
				
		while (line != null) {
			lineNo++;

			line = line.trim();

			if (line.startsWith("dispinterface ")) {
				className = line.substring(14).trim();
				
				start = true;
			}

			if (!start) {
				line = reader.readLine();

				continue;
			}

			if (line.equals("}")) {				
				String newClass = hashmap.get(className);

				if (newClass != null && newClass.length() > 0) {
					outputStream.write(generateEvents(newClass, eventList).getBytes());
				}
				
				start = false;
				eventList.clear();
				
			}
			
			if (line.startsWith("[id(")) {
				eventList.add(new Event(line, lineNo));
			}
			
			line = reader.readLine();
		}
		
		reader.close();

		reader = new BufferedReader(new FileReader(out));

		lineNo = 0;
		line = reader.readLine();

		start = false;

		className = "";
		int id = 1000;

		LinkedHashMap<String, Dispatch> map = new LinkedHashMap<String, Dispatch>();

		while (line != null) {
			lineNo++;

			line = line.trim();

			if (line.indexOf(" : public IDispatch") != -1) {
				className = line.split(":")[0].trim();
				
				if (!className.endsWith("Events")) {
					start = true;
				}
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

	private String generateEvents(String className, List<Event> eventList) throws Exception {
		StringBuffer buffer = new StringBuffer();
		
		buffer.append("robin_hood::unordered_map<int, wstring> " + className + "::m_idNameMap = {\n");
		
		int index = 0;
		
		for (Event event : eventList) {
			if (index > 0) {
				buffer.append(",\n");
			}
			
			buffer.append("robin_hood::pair<int, wstring> { " + event.getId() + ", wstring(L\"_" + event.getName() + "\") }");
			
			index++;
		}
	
		buffer.append("\n");
		buffer.append("};\n");
		buffer.append("\n");
		
		buffer.append("HRESULT " + className + "::FireDispID(const DISPID dispid, DISPPARAMS * const pdispparams) {\n");
		buffer.append("CComPtr<IDispatch> disp;\n");
		buffer.append("g_pplayer->m_ptable->m_pcv->m_pScript->GetScriptDispatch(nullptr, &disp);\n");
		buffer.append("\n");
		buffer.append("const robin_hood::unordered_map<int, wstring>::iterator it = m_idNameMap.find(dispid);\n");
		buffer.append("if (it != m_idNameMap.end()) {\n");
		buffer.append("wstring name = wstring(m_wzName) + it->second;\n");
		buffer.append("LPOLESTR fnNames = (LPOLESTR)name.c_str();\n");
		buffer.append("\n");
		buffer.append("DISPID tDispid;\n");
		buffer.append("const HRESULT hr = disp->GetIDsOfNames(IID_NULL, &fnNames, 1, 0, &tDispid);\n");
		buffer.append("\n");
		buffer.append("if (hr == S_OK) {\n");
		buffer.append("disp->Invoke(tDispid, IID_NULL, 0, DISPATCH_METHOD, pdispparams, nullptr, nullptr, nullptr);\n");
		buffer.append("}\n");
		buffer.append("}\n");
		buffer.append("\n");
		buffer.append("return S_OK;\n");
		buffer.append("}\n");
		buffer.append("\n");
		
		return indent(buffer.toString());
	}
	
	private String generateClass(String className, LinkedHashMap<String, Dispatch> dispatchMap) throws Exception {
		StringBuffer buffer = new StringBuffer();

		buffer.append("robin_hood::unordered_map<wstring, int> " + className + "::m_nameIDMap = {\n");
		
		int index = 0;

		for (String key : dispatchMap.keySet()) {
			Dispatch dispatch = dispatchMap.get(key);

			if (dispatch.getId() == - 4) {
				continue;
			}

			if (index > 0) {
				buffer.append(",\n");
			}
			
			buffer.append("robin_hood::pair<wstring, int> { wstring(L\"" + key.toLowerCase() + "\"), " + dispatch.getId() + " }");

			index++;
		}
		
		buffer.append("\n");
		buffer.append("};\n");
		buffer.append("\n");
		buffer.append("STDMETHODIMP " + className + "::GetIDsOfNames(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) {\n");
		buffer.append("wstring name = wstring(*rgszNames);\n");
		buffer.append("std::transform(name.begin(), name.end(), name.begin(), tolower);\n");
		buffer.append("const robin_hood::unordered_map<wstring, int>::iterator it = m_nameIDMap.find(name);\n");
		buffer.append("if (it != m_nameIDMap.end()) {\n");
		buffer.append("*rgDispId = it->second;\n");
		buffer.append("return S_OK;\n");
		buffer.append("}\n");
		buffer.append("return DISP_E_UNKNOWNNAME;\n");
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
				else if ("IBall**".equals(param.getType())
						|| "IFontDisp**".equals(param.getType())
						|| "ITable**".equals(param.getType())
						|| "IDispatch**".equals(param.getType())) {
					buffer.insert(0, "V_VT(pVarResult) = VT_DISPATCH;\n");
					buffer.append("(" + param.getType() + ")&V_DISPATCH(pVarResult)");
				}
				else if ("SAFEARRAY**".equals(param.getType())) {
					buffer.insert(0, "V_VT(pVarResult) = VT_ARRAY;\n");
					buffer.append("(" + param.getType() + ")&V_ARRAY(pVarResult)");
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
