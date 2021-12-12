#pragma once
#include <Python.h>
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

/*
* Modularized the Python code provided in main to facilitate faster compiles as these files will likely not be edited to any major degree.
* All methods found in main for Python Interpreting have been move to this new class.
*/

class PythonReader
{
public:
	void CallProcedure(string pName);
	void CallProcedure(string pName, string param);
	int callIntFunc(string proc, string param);
	int callIntFunc(string proc, int param);
};