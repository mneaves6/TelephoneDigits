/*
 * Name: Maximiliano Neaves
 * Section: COSC/ITSE 1307
 * Homework: TelephoneDigits
 * This program converts uppercase letters to their corresponding
 * telephone digits.
 */
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char charLetter;
	int intDigit = 2, intNum = 1;

	cout << "Program to convert uppercase letters to "
		<< "their corresponding telephone digits."
		<< endl;

	cout << "To stop the program, enter #." << endl;

	cout << "Enter an uppercase letter: ";
	cin >> charLetter;
	cout << endl;

	while (charLetter != '#')
	{
		cout << "Letter: " << charLetter;
		cout << ", Corresponding telephone digit: ";

		intNum = static_cast<int>(charLetter)
			- static_cast<int>('A');

		if (0 <= intNum && intNum < 26)
		{
			intDigit = (intNum / 3) + 2;

			if (((intNum / 3 == 6) || (intNum / 3 == 7)) && (intNum % 3 == 0))
			{
				intDigit = intDigit - 1;
			}

			if (intDigit > 9)
			{
				intDigit = 9;
			}

			cout << intDigit << endl;
		}

		else
		{
			cout << "Invalid input." << endl;
		}

		cout << "Enter another uppercase "
			<< "letter to find its corresponding "
			<< "telephone digit." << endl;
		cout << "To stop the program, enter #."
			<< endl;

		cout << "Enter a letter: ";
		cin >> charLetter;
		cout << endl;
	}

    return 0;
}

