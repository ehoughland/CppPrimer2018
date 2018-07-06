// CPlusPlusPrimer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

//using namespace std;

//Exercise 1.3
void PrintHelloWorld()
{
	std::cout << "Hello, World!" << std::endl;
}

//Exercise 1.4
void MultiplyAndPrintTwoNumbers(int a, int b)
{
	std::cout << a * b << std::endl;
}

//Exercise 1.5
void ReadAndAddTwoNumbers()
{
	int a = 0, b = 0;

	std::cout << "Please enter two integers to add: ";

	std::cin >> a >> b;

	std::cout << "First number is: " << a << std::endl;
	std::cout << "Second number is: " << b << std::endl;

	std::cout << "The sum of " << a << " and " << b << " is " << a + b << std::endl;
}

//Exercise 1.6 - this program is not valid because << is a member of std::cout and cannot be called on its own. To fix it, add "cout" to the beginning of the lines that start with "<<"

//Exercise 1.7
/* this is a comment
*///* this is an incorrectly nested comment
//*/

//Exercise 1.8 - the first, second, and fourth are legal.

//Section 1.4.1
void TestPostAndPreIncrementing()
{
	int a = 5;
	int b = ++a;
	int c = 5;
	int d = c++;

	std::cout << "b contains: " << b << std::endl;
	std::cout << "d contains: " << d << std::endl;
}

//Exercise 1.9
void SumNumbersFrom50To100()
{
	int start = 50;
	int end = 100;
	int total = 0;
	int curr = start;

	while(curr <= end)
	{
		total += curr;
		++curr;
	}

	std::cout << "The sum of all the numbers between " << start << " and " << end << ", inclusive, is: " << total << std::endl;
}

//Exercise 1.10
void PrintNumbersFrom10To0()
{
	int start = 10;
	int curr = start;

	while(curr > 0)
	{
		std::cout << curr << ", ";
		--curr;
	}

	std::cout << std::endl;
}

//Exercise 1.11
void PrintNumbersBetween()
{
	int start = 0, end = 0;

	std::cout << "Please enter the start of the range: ";
	std::cin >> start;

	std::cout << "Please enter the end of the range: ";
	std::cin >> end;

	int curr = start;

	if(start > end)
	{
		while(curr > end)
		{
			std::cout << curr-- << ", ";
		}

		std::cout << curr; //we don't want to end with a comma.
	}
	else if (start < end)
	{
		while(curr < end)
		{
			std::cout << curr++ << ", ";
		}

		std::cout << curr;
	}
	else
		std::cout << start; // integers input are identical

	std::cout << std::endl;
}

std::string global_str;	
int global_int;

//Variable initialization
void InitializationTest()
{
	int local_int;
	std::string local_str;

	std::cout << "global string: " << global_str << std::endl;
	std::cout << "global int: " << global_int << std::endl;

	std::cout << "local int: " << local_int << std::endl;
	std::cout << "local string: " << local_str << std::endl;
}

//Exercise 1.12- 

int main()
{
	//PrintHelloWorld();
	//MultiplyAndPrintTwoNumbers(5, 6);
	//ReadAndAddTwoNumbers();
	//TestPostAndPreIncrementing();
	//SumNumbersFrom50To100();
	//PrintNumbersFrom10To0();
	//PrintNumbersBetween();

    return 0;
}