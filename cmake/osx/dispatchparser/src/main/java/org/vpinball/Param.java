package org.vpinball;

public class Param {

	public enum ParamType {
		RETVAL_OUT,
		OUT,
		IN,
	}

	private ParamType paramType;
	private String type;
	private String name;
	private String defaultValue;
	private boolean optional = false;

	public Param(String param) {
		if (param.indexOf("[retval][out]") != -1) {
			paramType = ParamType.RETVAL_OUT;
		}
		else if (param.indexOf("[out]") != -1) {
			paramType = ParamType.OUT;
		}
		else {
			paramType = ParamType.IN;
		}

		boolean hasDefaultValue = (param.indexOf("[defaultvalue]") != -1);
		optional = (param.indexOf("[optional]") != -1);

		param = param.replaceAll("(?:/\\*(?:[^*]|(?:\\*+[^*/]))*\\*+/)|(?://.*)", "");
		param = param.replaceAll("\\* \\*", "**");
		param = param.trim();

		String[] tokens;

		if (hasDefaultValue) {
			tokens = param.split("=");

			param = tokens[0];
			defaultValue = tokens[1].trim();
		}

		tokens = param.split(" ");

		type = tokens[0];

		if (tokens.length > 1) {
			name = tokens[1];

			if (name.startsWith("**")) {
				type += "**";
			}
			else if (name.startsWith("*")) {
				type += "*";
			}

			name = name.replaceAll("\\*", "");
		}
	}

	public ParamType getParamType() {
		return paramType;
	}

	public String getType() {
		return type;
	}

	public void setKey(String type) {
		this.type = type;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public boolean hasDefaultValue() {
		return defaultValue != null;
	}

	public boolean isOptional() {
		return optional;
	}

	public String getDefaultValue() {
		return defaultValue;
	}
}
