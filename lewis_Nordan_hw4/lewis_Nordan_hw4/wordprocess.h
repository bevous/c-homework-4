#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class wordprocess
{

private:
	string message;
	vector<string> words;

public:
	wordprocess();
	~wordprocess();


	//setter
	void setString(string newMessage);

	void wordsInMessage();

	string reverse();
	string sort();
	string rot13();

};

