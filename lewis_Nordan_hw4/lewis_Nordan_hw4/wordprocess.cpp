#include "stdafx.h"
#include "wordprocess.h"


wordprocess::wordprocess()
{
	message = "";
	
}


wordprocess::~wordprocess()
{
}

void wordprocess::setString(string newMessage) {
	message = newMessage;
}

void wordprocess::wordsInMessage() {
	words.clear();
	int y = 0;
	size_t pos = 0;
	string copymes = message;
	string delim = " ";

	while ((pos = copymes.find(delim)) != string::npos) {
		words.push_back( copymes.substr(0, pos) );
		copymes.erase(0, pos + delim.length());
	}
	words.push_back(copymes);
	/*
	for (int x = 0; x < words.size(); x++) {
		cout << words[x] << endl;
	}*/
}

string wordprocess::reverse() {
	wordsInMessage();
	string currentWord;
	//cout << words.size() << endl;
	for (int x = words.size()-1; x >= 0; x--) {
		if (x < words.size()-1) {
			currentWord += " ";
		}
		currentWord += words[x];
		cout << currentWord << "::" << x << endl;
	}
	
	return currentWord;
}

string wordprocess::sort() {
	string sorted;
	wordsInMessage();
	string * temp;
	temp = new string[words.size()];

	for (int x = 0; x<words.size();x++)
	{
		temp[x] = words[x];
		//cout << "word at :" << x << "  " << temp[x] << endl;
		//cout << "first letter of the word at :" << x << "  " << temp[x][0] << endl;
	}
	cout << '\n';
	for (int y = 0; y < words.size(); y++) {
	
		for (int x = 0; x < words.size(); x++) {
			if (x + 1 < words.size())
				if (tolower(temp[x][0]) > tolower(temp[x + 1][0])) {
					//cout << temp[x] << " : " << temp[x + 1] << endl;				
					temp[x].swap(temp[x + 1]);
					//cout << temp[x] << " : " << temp[x + 1] << endl;
				}
		}
	
	}
	for (int x = 0; x < words.size(); x++) {
		if (x > 0) {
			sorted += " ";
		}
		sorted += temp[x];
	}

	delete[] temp;
	return sorted;
}

string wordprocess::rot13() {
	return "help";
}