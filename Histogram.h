#pragma once
#include <string>
#include <iostream>

using namespace std;
class Histogram
{
public:
	void SetItem(string fileItemName)
	{
		itemName = fileItemName;
	}

	void SetItemCount(int fileItemCount)
	{
		itemCount = fileItemCount;
	}
	string GetFileItemName() const { return itemName; }
	int GetFileItemCount() const { return itemCount; }


private:
	string itemName = "none";
	int itemCount = -1;
};