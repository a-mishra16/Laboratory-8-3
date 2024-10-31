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

int main()
{
	char numeral = 'M';
	int total = 0;

	cout << romanCharValue(numeral);


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
