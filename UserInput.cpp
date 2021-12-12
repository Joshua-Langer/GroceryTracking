#include "UserInput.h"

DataProcess dataProc;

/* Displays the user menu for the user to choose an option of what they want to do in the program */
void UserInput::DisplayMenu()
{
	char choice; // This will pass to the Process Selection method.
	cin.clear();
	cout << "***********************" << endl;
	cout << "*******Main Menu*******" << endl;
	cout << "****Choose an option***" << endl;
	cout << "1. Item Purchase Frequency " << endl;
	cout << "2. Specific Item Freqency" << endl;
	cout << "3. Historical Purchase Data" << endl;
	cout << "4. Exit" << endl;
	cin >> choice;
	ProcessSelection(choice);
}

/* Leverages a switch statement to process if the user has chosen a correct option and then moves them to the correct option location.*/
int UserInput::ProcessSelection(char selection)
{
	/* 
	* Found some issues using int's explicitly. Could have changed the int to auto, opted for hard declaration of char
	* in both the menu and here to ensure no major issues going forward
	* Checks against the char selection to determine what happens next on the user interaction side.
	*/
	switch (selection)
	{
	case '1':
		dataProc.NumItemAppear(); // This gives us the Full list of every item and the occurances that it appears.
	case '2':
		GetItemSelection(); // Starts the method to input an item we want to check for.
	case '3':
		dataProc.HistoricItem(); // Launches the Histogram method in PythonCode.
	case '4':
		exit(4); // Exit code is 4 when it is a clean close.
	default:
		system("CLS"); // Clear the screen
		cout << "You entered an invalid selection." << endl; // Alert the user to failed input
		cout << "Please try again..." << endl;
		DisplayMenu(); // Give the user the menu back.
	}
}

/* This passes to the DataProcessor to check against the python dictionary to have python process the item chosen.*/
void UserInput::GetItemSelection()
{
	string item;
	cout << "What item do you want to check for?" << endl;
	cin >> item;
	dataProc.SpecificItemCount(item);
}