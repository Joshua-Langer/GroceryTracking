#pragma once
#include "PythonReader.h"
#include "UserInput.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include "Histogram.h"

using namespace std;

// Class to Process the selections from the user and call used Python Methods.
class DataProcess
{
public:
	void NumItemAppear();
	void SpecificItemCount(string item);
	void HistoricItem();

private:
	void ProcessDataFile(vector<Histogram>& dataSet);
	void OutputData(const string& itemName, const vector<Histogram>& dataSet, const int& itemCount);
};
