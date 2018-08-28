#include <iostream>

//Exercise 2.1 - int is guaranteed to be at least 16 bits, long 32 bits, long long 64 bits, and short 16 bits.
//unsigned types use all of the bits to define the value whereas signed types use one bit to denote pos/neg.
//float has single precision (6 sig digits), double has double precision (10 sig digits)

//Exercise 2.2 - double or float, depending on the machine

//Exercise 2.3
//32
//wrap around
//32
//-32
//0
//0

//Exercise 2.4
void MixingTypes()
{
	unsigned u = 10, u2 = 42;

	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;

	int i = 10, i2 = 42;

	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;

	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;
}

//Exercise 2.5 - 'a' is a character literal, L'a' is a wide character literal, "a" is a string literal, 
//L"a" is a string wide character literal.
//10 is an int, 10u is an unsigned integer, 10L is a long decimal, 10uL is an unsigned long decimal, 
//012 is an octal, 0xC is hexadecimal
//3.14 is a double, 3.14F is a float, 3.14 is a long double
//10 is a decimal, 10u is unsigned decimal, 10. is double, 10e-2 is double

//Exercise 2.6 - the first is decimal types and would equate to September 7th. The second is octal types and would
//produce a compiler error since 9 is out of octal's range.

//Exercise 2.7 - a: \145 is E and \012 is a newline.
void OctalEscapes()
{
	std::cout << "Who goes with F\145rgus?\012";
}

//Exercise 2.8
void EscapeSequences()
{
	std::cout << "\062\115\012";
	std::cout << "\062\011\115\012";
}

//Exercise 2.9 - a: error trying to access a variable whose value is undefinted. b: error - list initialization
//doesn't allow for loss of data. c: error - wage hasn't been declared yet. d: ok, truncation will occur.
void InitializationTest()
{
	//std::cin >> int input_value;
}

//Exercise 2.10 - global_str - empty string, global_int - 0, local_int - undefined, local_str - empty string

//Exercise 2.11 - a: definition, b: definition, c: declaration

//Exercise 2.12 - a: invalid (keyword), b: valid as long as within a function, c: invalid - contains an 
//invalid character (-), d: invalid because it doesn't begin with a letter or underscore, e: valid but doesn't
//follow best practice naming convention (should not begin with a capital letter)
void VariableNaming()
{
	//int double = 3.14;
	//int _;
	//int catch-22;
	//int 1_or2 = 1;
	//double Double = 3.14;
}

//Exercise 2.13 - j = 100

//Exercise 2.14 - yes, legal but the output will be 100 45, since the i inside the for loop will fall out of scope.
void Scopes()
{
	int i = 100, sum = 0;
    
    for (int i = 0; i != 10; ++i)
        sum += i;
    
    std::cout << i << " " << sum << std::endl;
}

//Exercise 2.15 - a: valid, b: invalid - initializer must be an object, c: valid, d: error - reference must be 
//defined

//Exercise 2.16 - a: makes d = 3.14159, b: makes d = 0, c: makes i = 0, d: makes i = 0

//Exercise 2.17 - prints 10 10

//Exercise 2.18
void PointerBasics()
{
	int i = 10;
	int j = 20;
	int *p = &i;
	
	std::cout << "Variable i: " << i << std::endl;
	std::cout << "Variable j: " << j << std::endl;
	std::cout << "Value to which pointer p points: " << *p << std::endl;
	std::cout << "Value of pointer p: " << p << std::endl;

	p = &j;
	std::cout << "Changed value of p to the address of j: " << p << std::endl;
	std::cout << "Value to which p points (j): " << *p << std::endl;

	*p = 30; //sets j = 30
	std::cout << "Changed value to which p points to (j): " << j << std::endl;
}

//Exercise 2.19 A pointer is an object, references are not. Pointers do not need to be initialized when defined.
//Pointers can point to many different objects over their lifetime.

//Exercise 2.20 Declares i as an integer equal to 42. Then declares pointer p1 and initializes it to the addresss of i
//then sets i = i * i which makes i equal to 42 * 42 (1764)

//Exercise 2.21 a is illegal because you can't assign a integer reference to a double pointer. b is illegal because
//you can't assign an integer pointer to an integer. c is legal.

//Excercise 2.22 if (p) will always succeed because it is a location in memory. if (*p) may not succeed because it might
//point to an integer that has a value of 0.

void PointersAndBools()
{
	int p = 10;

	int *p = &p;

	if(p)
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
}

int main()
{
	//std::cout << "Hello, World!";
	//MixingTypes();
	//OctalEscapes();
	//EscapeSequences();
	//Scopes();
	//PointerBasics();
	PointersAndBools();

	return 0;
}