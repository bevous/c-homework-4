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
	string message;
	getline(cin, message, '\n');
	hiddenMessage.setString(message);

	cout<< hiddenMessage.reverse()<<endl;

	system("pause");
    return 0;
}

