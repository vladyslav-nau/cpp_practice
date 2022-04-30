#include "literals.hpp"
#include <iostream>

void literals_main()
{
	int a = 12; // 12 
	int b = 0b1000; // 8
	int c = 012; // 10
	int d = 0xA; // 10

	int result = a + b + c + d; // 40
	std::cout << result;
}