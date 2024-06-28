#include "Dictionnary.h"
#include <iostream>

using namespace std;

void Dictionnary::addDefinition(string word, string definition)
{
	auto it = dictionnary.find(word);

	if (it != dictionnary.end())
	{
		it->second = definition;
	}
	else
	{
		dictionnary[word] = definition;
	}
	
}

string Dictionnary::getDefinition(string word) const
{

	auto it = dictionnary.find(word);
	string result = "";

	if (it != dictionnary.end())
	{
		result = it->second;
	}
	else
	{
		result = "WORD NOT FOUND! ";
	}
	

	return result;
}

void Dictionnary::printAll() const
{
	for (auto element : dictionnary)
	{
		cout << element.first << " :\t " << element.second << endl;
	}
	cout << endl;
}