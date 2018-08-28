// CPlusPlusPrimer.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include <string>
#include "Sales_item.h"

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

//Variable initialization
void InitializationTest()
{
	std::string global_str;	
	int global_int = 0;
	int local_int = 0;
	std::string local_str;

	std::cout << "global string: " << global_str << std::endl;
	std::cout << "global int: " << global_int << std::endl;

	std::cout << "local int: " << local_int << std::endl;
	std::cout << "local string: " << local_str << std::endl;
}

//Exercise 1.12 - It sums the numbers from -100 to 100. The final value is 0.

//Exercise 1.13 part 1
void PrintNumbers10To0ForLoop()
{
	for (int i = 10; i > 0; --i)
	{
		std::cout << i << std::endl;
	}
}

//Exercise 1.13 part 2
void SumNumbersFrom50To100ForLoop()
{
	int total = 0;
	
	for (int i = 50; i <= 100; ++i)
	{
		total += i;
	}

	std::cout << "The sum of the numbers from 50 to 100 inclusive is: " << total << std::endl;
}

//Exercise 1.14 - for loops have variables with only local visibility, and are automatically "managed" by the statement. while loops can be simpler to write and read than for loops.

//Exercise 1.15 part 1
//int SyntaxErrors(
//{
//	std::cout << "Read each file." << std::endl:
//	std::cout << Update master. << std::endl;
//	std::cout << "Write new master." std::endl;
//
//	return 0
//}

//Exercise 1.15 part 2
void TypeErrors(int a)
{
	std::cout << a;
}

//Exercise 1.15 part 3
void DeclarationErrors()
{
	//std::cout << doesNotExist;
	//cout << "Exists but doesn't use std::";
}

//Exercise 1.16
void PrintSumOfInputs()
{
	int curr = 0;
	int sum = 0;

	while (std::cin >> curr)
	{
		sum += curr;
	}

	std::cout << "The sum of your inputs is: " << sum << std::endl;
}

//Exercise 1.17 - if the input values are all equal, it would execute normally. if there were no repeats, it would execute normally.

//Exercise 1.18 - nah.

//Exercise 1.19 - already handled that in exercise 1.11

//Exercise 1.20
void ReadBookSales()
{
	Sales_item item1, item2, item3;

	std::cout << "Enter the first sales item: ";
	std::cin >> item1;
	std::cout << "Enter the second sales item: ";
	std::cin >> item2;
	std::cout << "Enter the third sales item: ";
	std::cin >> item3;

	std::cout << "Totals: " << std::endl << item1 << std::endl << item2 << std::endl << item3 << std::endl;
}

//Exercise 1.21
int AddTwoBooks()
{
	Sales_item item1, item2;

	std::cout << "Enter the first sales item: ";
	std::cin >> item1;
	std::cout << "Enter the second sales item: ";
	std::cin >> item2;

	if (item1.isbn() == item2.isbn())
	{
		std::cout << "The sum of the two books you entered is: " << item1 + item2;
		return 0;
	}
	else
	{
		std::cerr << "ERROR: The two books you entered do not have the same ISBN.";
		return -1;
	}
}

//Exercise 1.22
int ReadSalesItemsAndSum()
{
	Sales_item total;

	if (std::cin >> total)
	{
		Sales_item trans;

		while (std::cin >> trans)
		{
			if (trans.isbn() == total.isbn())
			{
				total += trans;
			}
			else
			{
				std::cout << "Total for book: " << total << std::endl;
				total = trans;
			}
		}

		std::cout << "Total for book: " << total << std::endl;
	}
	else
	{
		std::cerr << "No data?!" << std::endl;
		return -1;
	}

	return 0;
}

//Exercise 1.23 & 1.24
int ReadAndCountTransactions()
{
	Sales_item prevItem, currItem;
	int transCount = 0;

	if(std::cin >> prevItem)
	{
		transCount = 1;

		while (std::cin >> currItem)
		{
			if (currItem.isbn() == prevItem.isbn())
			{
				++transCount;
			}
			else
			{
				std::cout << "Total transactions for ISBN " << prevItem.isbn() << ": " << transCount << std::endl;
				prevItem = currItem;
				transCount = 1;
			}
		}

		std::cout << "Total transactions for ISBN " << prevItem.isbn() << ": " << transCount << std::endl;
	}
	else
	{
		std::cerr << "No data?!" << std::endl;
		return -1;
	}

	return 0;
}

int main()
{
	//PrintHelloWorld();
	//MultiplyAndPrintTwoNumbers(5, 6);
	//ReadAndAddTwoNumbers();
	//TestPostAndPreIncrementing();
	//SumNumbersFrom50To100();
	//PrintNumbersFrom10To0();
	//PrintNumbersBetween();
	//PrintNumbers10To0ForLoop();
	//SumNumbersFrom50To100ForLoop();
	//TypeErrors("this will fail");
	//PrintSumOfInputs();
	//ReadBookSales();
	//AddTwoBooks();
	//ReadAndCountTransactions();

    return 0;
}