// lewis_Nordan_hw4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include "wordprocess.h"
using namespace std;


int main()
{
	wordprocess hiddenMessage;
	string message = "q w e r t y u i o p a s Q W E R T Y U I O P A S D F G H J K L Z X C V B N M d f g h j k l z x c v b n m";
	string encrypted;

	cout << "enter your message." << endl;
	//getline(cin, message, '\n');
	cout << message << endl;
	hiddenMessage.setString(message);

	cout << hiddenMessage.sort() << endl;

	/*cout<< "reversed message : " << (encrypted = hiddenMessage.reverse()) <<endl;

	hiddenMessage.setString(encrypted);

	cout << "decrypted message : "<< (encrypted = hiddenMessage.reverse()) <<endl;
	*/
	
	
	
	
	system("pause");
	return 0;
}

