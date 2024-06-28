#ifndef DICTIONNARY_H
#define DICTIONNARY_H

#include <string>
#include <map>

using namespace std;

class Dictionnary
{
	public:
		void addDefinition(string word, string definition);
		string getDefinition(string word) const;
		void printAll() const;

	private:
		map<string, string> dictionnary;

};

#endif // !DICTIONNARY_H

