#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <Windows.h>
using namespace std;

// Function Prototypes
void searchList(const vector<int> vect, int, int);




int main()
{
	// Console
	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, 0);
	system("color 1f");

	// Seed RNG
	srand(time(0));

	// Variables
	
	int findMe;
	int size;
	int foundAt;
	

	// Prompt
	cout << "How large do you want the set?\nSIZE: ";
	cin >> size;
	cout << "\nWhat number do you want to find (between 1 and 100)?\n";
	cin >> findMe;

	// Get values into vector

	vector<int> brah(size);
	for (int b = 0; b < size; b++)
		brah.at(b) = rand() % 100 + 1;

	// Looking for it
	cout << "I'll look for " << findMe << " in a vector with " << size << " intergers.\n";
	searchList(brah, size, findMe);
	

	system("pause");
	//test to see if vector was valid
	bool deci = false;
	char choice;
	cout << "Would you like to search yourself(y/n)?\n";
	cin >> choice;

	switch (choice)
	{
	case 'y':
	case 'Y':
		deci = true;
		break;
	case 'n':
	case 'N':
		break;

	}
	if (deci == true) {
		cout << "==================================\n\n";
		for (int t = 0; t < size; t++)
		{
			cout << brah.at(t) << "------- Position " << t << endl;
		}
	}
	// END
	system("pause");
	return 0;
}

void searchList(const vector<int> list, int numElems, int valueWanted)
{
	// This will perform a linear search on a vector.

	int index = 0;      // Used as a subscript to search vector 
	int position;  // To record position of the search value
	bool found = false; // Flag to indicate if the value was found
	int whatever = 0;


	for (int i = 0; i < numElems; i++)
	{
		if (list.at(i) == valueWanted)
		{
			position = i;
			found = true;
		}
	}

	if (found == true)
	{
		cout << valueWanted << " was found at position " << position << " of the randomly generated vector.\n";
	}
	else if (found == false)
	{
		cout << valueWanted << " was not able to be located in the randomly generated vector.\n";
	}

	/*

	while (index < numElems && !found)
	{
		if (list.at(index) == valueWanted)
		{
			found = true;
			position = index;
			return position;
		}
		else if (index == numElems && found == false)
		{
			cout << valueWanted << " was not detected in the vector.\n";
			return -666;
		}

		index++;
	}
	*/
	

}