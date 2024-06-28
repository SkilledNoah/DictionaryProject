/* 
-----------------------------------------
	
	* Course: The Complete C++ Developer Course - John P. Baugh
	* Author: Noah Louvet
	* Section: 11 - Templates, the STL, and Other Skills

-----------------------------------------
*/


#include <iostream>
#include <map>
#include <string>
#include "Dictionnary.h"

using namespace std;

void printMenu();
void uiAddWord(Dictionnary& dictionnary);
void uiGetDefinition(const Dictionnary& dictionnary);


int main()
{
	int choice;
	Dictionnary theDictionnary;

	printMenu();
	cin >> choice;
	cin.get(); //consume new line character


	while (choice != 0)
	{

		if (choice == 1)
		{
			uiAddWord(theDictionnary);
		}

		else if (choice == 2)
		{
			uiGetDefinition(theDictionnary);
		}

		else if (choice == 3)
		{
			cout << "Printing all definitions: " << endl;
			theDictionnary.printAll();
			cout << endl;
		}

		cout << endl;
		printMenu();
		cin >> choice;
		cin.get(); //consume new line character

	}// end while

	cout << endl;
	cout << "Program terminated" << endl;
	return 0;
}

void printMenu()
{
	cout << endl;
	cout << "type your selection" << endl << endl;
	cout << "\t1 - Add a new word and definition" << endl;
	cout << "\t2 - Get word definition" << endl;
	cout << "\t3 - Print all definitions" << endl;
	cout << "\t0 - Exit the program" << endl << endl;
}

void uiAddWord(Dictionnary& dictionnary)
{
	string word;
	string definition;

	cout << "enter the word: " << endl;
	getline(cin, word);

	cout << "enter definition for " << word << " : " << endl;
	getline(cin, definition);

	dictionnary.addDefinition(word, definition);

}

void uiGetDefinition(const Dictionnary& dictionnary)
{
	string theWord;

	cout << "For which word do you want the definition? " << endl;
	getline(cin, theWord);

	cout << endl;
	cout << "definition:" << endl;
	cout << dictionnary.getDefinition(theWord) << endl;
	cout << endl;
}

