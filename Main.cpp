/*
* Joshua Langer
* Grocery Tracking Application
* Use case, takes in a dat file, currently stored in the local directory of the executable
* This could be modified to look for a server location. 
* Can also change the file type being looked at.
* Leverages Python Dictionary to list the data out and check against for various functions
* Can Print all items sold in a specific day, Look for a specific item and how much was sold in a day
* Also generates a histogram and prints it to the console.
* Possible updates, leverage numpy or matplotlibs to generate a more robust set of graphs.
* 12/11/2021
*/


#include <iostream>
#include <cmath>
#include <string>
#include "UserInput.h"

using namespace std;

// This function only starts us up. All primary control methods are inside other CPP files and headers. 
// Everything is class based and other controls come from a single Python file for methods from Python.
void main()
{
	UserInput input; // Ensure access to the UserInput class

	input.DisplayMenu(); // Call to display the initial menu that then starts user interactions.
}