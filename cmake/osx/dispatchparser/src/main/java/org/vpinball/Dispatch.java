package org.vpinball;

import java.util.ArrayList;

public class Dispatch {
	private int id;
	private String key;
	private ArrayList<Function> functionList = new ArrayList<Function>();

	public int getId() {
		return is_NewEnum() ? -4 : id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getKey() {
		return key;
	}

	public boolean is_NewEnum() {
		return "_NewEnum".equals(key);
	}

	public void setKey(String key) {
		this.key = key;
	}

	public ArrayList<Function> getFunctionList() {
		return functionList;
	}

	public int getFunctionCount() {
		return functionList.size();
	}

	public void getFunctionList(ArrayList<Function> functionList) {
		this.functionList = functionList;
	}

	public Function getFunction(int index) {
		return functionList.get(index);
	}

	public void addFunction(Function function) {
		functionList.add(function);
	}
}