// Forelesning 2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

	void addFive(int &x)
	{
		//cout << "x = " << x << endl;
		x += 5;
	}

	int main()
	{
		int verdi = 10;
		cout << "verdi = " << verdi << endl;
		addFive(verdi);
		cout << "verdi = " << verdi << endl;
		system("pause");
		return 0;
	}