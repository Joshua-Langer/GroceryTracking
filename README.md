# GroceryTracking

The aim of this program is to take a text file of Sold Grocery Items and read from it from a Python Script and use the methods in it to get the amount of items sold, check how much of a particular item is sold and display a histogram of the sold items. This will help grocers in deciding what items to have front facing for customers to purchase, as well what they may need to order.

In this program, I modularized the code out to ensure quick compiles and minimal waiting time to test, troubleshoot and validate responsiveness in the program. I also was able to ensure a clean menu that the user always ends up at and quality of input responses from the user to ensure no crashes based on input.

Areas of improvement are in added functionality of the program, utilizing this code to check against a server, utilizing const and static to secure and lock down certain variables.

The most difficult section was resolving the Python Script to print the requested information without the new line indicator '\n' and ensure that it prints out in a 2 clean columns instead of on 2-3 lines of information.

Proper Menu Building would be a critical skill to take over and leveraging if/ofstream to read and write data as applicable.

I structure the code into modularized files and organized code based on function, all user input sections are together, all data processing are another class, there is nothing but the call to start the menu in the main file. This allowed me to keep the compile times down and also ensured that I could more efficently track faults as I would be looking at smaller files for issues.
