import re
import string
import math
import pprint

#Open the file method and perform basic tasks on it.
def FileOpen():
	mylist = {} #create a dictionary to store the data file
	File_object = open("Items.txt", "r") #open the data file
	lines = File_object.readlines() #read the data in the file
	File_object.close() #close the file...

	#while loop to strip the new line indicator from each line in the read lines
	index = 0
	while index < len(lines):
		lines[index] = lines[index].rstrip('\n')
		index += 1

	#loop through and count each word and create their value...
	for i in lines:
		if i in mylist:
			mylist[i] += 1
		else:
			mylist[i] = 1
	return mylist

# Get the general item count in the dat file...
def ItemCount():
	item_list = FileOpen()
	pprint.pprint(item_list)

# Find a specific item and print the item and the amount of times it was purchased.
def SpecificItem(x):
	item_list = FileOpen()
	if x in item_list:
		print(x, item_list[x])
	else:
		print("Item not found...")


# Using the existing txt file, create a dat file for the frequencies that we will read into the C++ program
def CreateDataFile():
	item_list = FileOpen()
	with open("frequency.dat", "w+") as f:
		for key, value in item_list.items():
			f.write('%s %s\n' % (key, value))
	f.close()