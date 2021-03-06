// Forelesning 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include "Kalkulator.h"
using namespace std;

void printAscii();

int main()
{
	Kalkulator kalkiss(0);
	int running = 1;
	double x, y;
	int i;
	while (running)
	{
		cout << "Enter an action" << endl;
		cout << "  1 - Addition | 2 - subtraction | 3 - division" << endl << "  4 - multiplication | 5 -exit" << endl;
		
		while (!(cin >> i))
		{
			cin.clear();
			cin.ignore(999, '\n');
			cout << "Invalid value please try again" << endl;
			//continue;
		}	
		//cout << i << endl;
		cout << "Enter the first number: ";
		cin >> x;
		cout << "You entered: " << x << endl << endl;
		cout << "Enter the second number: ";
		cin >> y;
		cout << "You entered: " << y << endl << endl;
		double result = 0;
		switch (i)
		{
			case 1: result = kalkiss.add(x, y);
			break;
			case 2: result = kalkiss.subtract(x, y);
				break;
			case 3: result = kalkiss.divide(x, y);
				break;
			case 4:  result = kalkiss.multiply(x, y);
				break;
			case 5: running = 0;
				continue;
				break;
			default: cout << "Not a valid number" << endl;
				break;
		}
		cout << "Result: " << result << endl;
	}
	//printAscii();		
	return 0;
}

void printAscii()
{
	for (int i = 33; i < 256; i++)
	{
		cout << i << ": " << static_cast<char>(i) << endl;
	}
}
 
