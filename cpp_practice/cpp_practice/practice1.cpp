#include "practice1.hpp"

void practice_main()
{
	double height = GetHeight();
	double result = CalculateHeight(height);
	std::cout << "Finally we are have: " << result << std::endl;
}

double GetHeight()
{
	float height(0);

	std::cout << "Enter height:" << std::endl;
	std::cin >> height;

	return height;
}

double CalculateHeight(const double start_height)
{
	double current_height{ start_height };

	for (int second = 0; current_height > lowest_point; second++) {
		double distance = gravity * pow(second, 2) / 2;
		current_height = start_height - distance;

		PrintOutput(current_height, second);
	}

	return current_height;
}

void PrintOutput(const double height, const int second)
{
	if (height <= 0) {
		std::cout << "Ball is on the ground!" << std::endl;
	}
	else {
		std::cout << "At " << second << " second: " << "current height - " << height << std::endl;
	}
}