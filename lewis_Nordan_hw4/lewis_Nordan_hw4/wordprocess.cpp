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
	int y = 0;
	char buffer[50];
	for (int x = 0; x < message.length(); x++) {
		if (message[x] == ' ') {
			words.emplace_back(message.substr(y,(y-x)));
			y = x;
		}
	}

}

string wordprocess::reverse() {
	string currentWord;
	for (int x = 0; x < words.size(); x++) {
		currentWord = words[x];
	}
	
	return currentWord;
}
string wordprocess::sort() {
	return "help";
}
string wordprocess::rot13() {
	return "help";
}