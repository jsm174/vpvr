package org.vpinball;

import java.util.ArrayList;
import java.util.List;

import org.vpinball.Param.ParamType;

public class Function {
	private int lineNo;
	private String line;
	private String name;
	private String id;

	private ArrayList<Param> paramList = new ArrayList<Param>();

	public Function(String line, int lineNo) throws Exception {
		this.line = line;
		this.lineNo = lineNo;

		int paramStartIndex = line.indexOf("(");

		if (paramStartIndex != -1) {
			int nameIndex = line.indexOf("STDMETHODCALLTYPE");

			if (nameIndex != -1) {
				name = line.substring(nameIndex + "STDMETHODCALLTYPE".length(), paramStartIndex).trim();

				if (name.startsWith("get_") || name.startsWith("put_")) {
					id = name.substring(4);
				}
				else {
					id = name;
				}

				int endIndex = line.indexOf(")");

				if (endIndex != -1) {
					for (String param : line.substring(paramStartIndex + 1, endIndex).trim().split(",")) {
						paramList.add(new Param(param));
					}
				}
			}
		}
	}

	public String getLine() {
		return line;
	}

	public int getLineNo() {
		return lineNo;
	}

	public String getName() {
		return name;
	}

	public String getId() {
		return id;
	}

	public List<Param> getParamList() {
		return paramList;
	}

	public int getCArgs() {
		int cArgs = 0;
		for (Param param:paramList) {
			if (param.getParamType() != ParamType.RETVAL_OUT) {
				cArgs++;
			}
		}
		return cArgs;
	}

	public boolean hasDefaultValueParams() {
		for (Param param:paramList) {
			if (param.hasDefaultValue()) {
				return true;
			}
		}
		return false;
	}

	public boolean hasOptionalParams() {
		for (Param param:paramList) {
			if (param.isOptional()) {
				return true;
			}
		}
		return false;
	}

	public boolean hasRetvalOutParam() {
		for (Param param:paramList) {
			if (param.getParamType() == ParamType.RETVAL_OUT) {
				return true;
			}
		}
		return false;
	}
}