// Calcatron1000.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

	double a; // problem
	double b; // second number
	char op; // operator
	double result; // result
	string x;

double applyOperand()
{

	switch (op)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '/':
		result = a / b;
		break;
	case '*':
		result = a * b;
		break;

	}
	return result;

	/*
	if (op == "+")
		result = a + b;
	if (op == "-")
		result = a - b;
	if (op == "/")
		result = a / b;
	if (op == "*")
		result = a * b;
	*/
}

double runCalc()
{

			cout << "Enter a number: \n";
			cin >> a;

			cout << "Enter an operator (+, -, /, *):" << endl;
			cin >> op;
			

			cout << "Enter another number: \n";
			cin >> b;
            applyOperand();
			//result = a + b;
			return result;

}


void verifyProceed()
{
			if (x == "y" || x == "Y")
			{
				cout << "Lets go!" << endl;
				runCalc();
			}
			if (x == "n" || x == "N")
			{
				cout << "You think you're smart? HA" << endl;
				system("pause");
				exit(0);
				
			}
			if (x != "Y" && x != "y" && x != "N" && x != "n")
			{
				cout << "Learn to read, dumbass!" << endl;
				main();
				
			}

}

void wannaStart()
{
	cout << "Would you like to start the calcatron 1000? y/n:" << endl;
	cin >> x;
	verifyProceed();
}

void wannaContinue()
{
	cout << "Would you like to enter another calculation? y/n:" << endl;
	cin >> x;
	verifyProceed();
}

int main()
{

	{

		wannaStart();
		cout << "Answer: ";
		cout << result << endl;
		for (; ; )
		{
			wannaContinue();
			cout << "Answer: ";
			cout << result << endl;
		}
		system("pause");
		return 0;
			
		}
	}