#include "DataProcess.h"
#include <iomanip>


PythonReader python; // ensure access to the Python Reader
UserInput inputProc; // ensure access to the user input processor

/*
* Gets the raw data from the txt file that python is reading from
*/
void DataProcess::NumItemAppear()
{
	python.CallProcedure("ItemCount"); // Call the requested method and display all items in the dat file and their counts.
	inputProc.DisplayMenu(); // Give the user the menu back
}

/*
* Looks for a specific item in the txt file that python is reading from and displays the data
*/
void DataProcess::SpecificItemCount(string item)
{
	python.CallProcedure("SpecificItem", item); // Call the requested method and display the requested item and it's count
	inputProc.DisplayMenu(); // Give the user the menu back
}

/*
* Calls the Python method to create our dat file of frequency and the starts the process of reading it and outputting the data.
*/
void DataProcess::HistoricItem()
{
	string itemName;
	int itemCount;
	python.CallProcedure("CreateDataFile"); // Generate the dat file
	system("CLS"); // clear the screen so it's clean before showing the data set.
	vector<Histogram> itemData;
	ProcessDataFile(itemData);
	OutputData(itemName, itemData, itemCount);
	inputProc.DisplayMenu();// Give the user the menu back
}

/*
* This loop will take the dat file and show the data set from this view.
*/
void DataProcess::ProcessDataFile(vector<Histogram>& dataSet)
{
	string itemName;
	int itemCount;
	Histogram currentData;
	
	ifstream inFS; //input file stream
	inFS.open("frequency.dat");

	if (!inFS.is_open())
	{
		cout << "Could not locate or open the requested file" << endl;
	}

	// Loop through and set all of the data in the file to a vector.
	while (!inFS.eof())
	{
		inFS >> itemName;
		inFS >> itemCount;

		if (!inFS.fail())
		{
			currentData.SetItem(itemName);
			currentData.SetItemCount(itemCount);
			dataSet.push_back(currentData);
		}
	}

	inFS.close();
}

/*
* This function Outputs all of the data from the read dat file and sets it as a histogram intead of showing the raw int.
*/

void DataProcess::OutputData(const string& itemName, const vector<Histogram>& dataSet, const int& itemCount)
{
	for (int i = 0; i < dataSet.size(); ++i)
	{
		int bar = dataSet.at(i).GetFileItemCount(); // on each loop through get the int and save to a temp variable bar, that we will use to create our string
		string s(bar, '#'); // create the temp string and set the amount of '#' characters to the var bar.
		cout << dataSet.at(i).GetFileItemName() << " " << s << endl;  // output all of the data.
	}
}