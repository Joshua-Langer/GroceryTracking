#pragma once
#include <iostream>
#include <string>
#include "DataProcess.h"

using namespace std;

class UserInput
{
public:
	void DisplayMenu();
private:
	int ProcessSelection(char selection);
	void GetItemSelection();
};