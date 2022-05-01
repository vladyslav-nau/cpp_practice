#include "practice_parity.hpp"

void PracticeMain()
{
	std::cout << "Enter your number:" << std::endl;
	int num = GetInteger();
	bool is_even = IsEven(num);
	OutMessage(num, is_even);
}

int GetInteger()
{
	int number{ 0 };
	std::cin >> number;
	return number;
}

bool IsEven(int number)
{
	if (number % 2 == 0)
		return true;
	else
		return false;
}

void OutMessage(int number, bool is_even)
{
	std::cout << "number " << number << " is even number? ";

	if (is_even)
		std::cout << "Yes, it's an even number!" << std::endl;
	else
		std::cout << "No, it's an odd number!" << std::endl;
}