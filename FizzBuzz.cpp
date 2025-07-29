// FizzBuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
using namespace std;

int main()
{	
	for (int numbers = 1; numbers < 101; numbers++) 
	{	
		if (numbers % 3 == 0 && numbers % 5 != 0)
		{
			cout << "Fizz" <<  "\n";
		}
		else if (numbers % 5 == 0 && numbers % 15 != 0)
		{
			cout << "Buzz" <<  "\n";
		}
		else if (numbers % 15 == 0)
		{
			cout << "FizzBuzz" <<  "\n";
		}
		else
		{
			cout << numbers << "\n";
		}
	}
}
