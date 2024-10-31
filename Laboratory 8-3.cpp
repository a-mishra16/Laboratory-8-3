/*
* Program: Laboratory 8-2.cpp
* Author: Aanika Mishra
* Date: 10-31-2024
* Description: This program converts a Roman numeral to its decimal number representation
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int romanCharValue(char r);
int convertRomanToInt(string s);

int main()
{
	string numeral;
	while (true)
	{
		cout << "Enter Roman number or Q to quit: ";
		getline(cin, numeral);
		if (numeral == "Q")
		{
			break;
		}
		cout << numeral << " = " << convertRomanToInt(numeral) << endl;
	}
}

int romanCharValue(char r)
{
	switch (r)
	{
	case 'I': return 1;
	case 'V': return 5;
	case 'X': return 10;
	case 'L': return 50;
	case 'C': return 100;
	case 'D': return 500;
	case 'M': return 1000;
	}
}


int convertRomanToInt(string s)
{	
	int total = 0;
	char x;
	char y;

	for (int i = 0; i < s.length(); i++)
	{
		x = s[i];
		y = s[i+1];

		int first = romanCharValue(x);
		int second = romanCharValue(y);

		if (first >= second || s.length() == 1)
		{
			total += first;
		}
		else
		{
			total += second - first;
			i++;
		}
	}
	return total;
	
}
