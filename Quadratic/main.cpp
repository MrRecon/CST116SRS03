// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <cassert>

int main()
{
	float a{};
	float b{};
	float c{};

	std::cout << "Enter your coefficients for a, b, c: " << '\n';
	std::cout << "Enter a: ";
	std::cin >> a;
	assert(a != 0);
	std::cout << "Enter b: ";
	std::cin >> b;
	std::cout << "Negative number for c: ";
	std::cin >> c;

	float discriminant = b * b - 4 * a * c;
	assert(discriminant >= 0);
	float denominator = 2 * a;
	float root1 = ((-b + sqrt(discriminant)) / (denominator));
	float root2 = ((-b - sqrt(discriminant)) / (denominator));

	std::cout << "First root is x = " << root1 << std::endl;
	std::cout << "Second root is x = " << root2 << std::endl;
	return 0;
}

