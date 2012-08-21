// txt adv test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void firstroom()
{
	char a;
	cout << "go north or south westeast you know" << endl;
	cin >> a;
	//doing stuff because why not
	if (a == 'help')
		cout << "You don't get any help, filthy casual." << endl;
	if (a == 'go')
		cout << "Go where?" << endl;
	if (a == 'go n')
		cout << "You went north." << endl;
	}

int main()
{
	firstroom();

cin.ignore(255, '\n');
cin.get();
	return 0;
}

