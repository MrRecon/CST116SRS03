// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <cassert>


int main()
{
	int i0{}, i1{};
	double d0{}, d1{};

	std::cin >> i0 >> i1 >> d0 >> d1;
	std::cout << '\n';
	assert(d0 > 0, d1 >0);

	std::cout << "i0 * i1 == " << std::left << i0 * i1 << '\n';
	std::cout << "i0 * d0 == " << std::left << i0 * d0 << '\n';
	std::cout << "d0 * d1 == " << std::left << d0 * d1 << '\n' << '\n';

	std::cout << "i0 / i1 == " << std::left << i0 / i1 << '\n';
	std::cout << "i0 / d0 == " << std::left << i0 / d0 << '\n';
	std::cout << "d0 / d1 == " << std::left << d0 / d1 << '\n' << '\n';
	
	std::cout << "i0 % i1 == " << std::left << i0 / i1 << '\n';
	std::cout << "i1 % i0 == " << std::left << i1 / i0 << '\n' << '\n';

	std::cout << "i0 + i1 == " << std::left << i0 + i1 << '\n';
	std::cout << "i0 + d0 == " << std::left << i0 + d0 << '\n';
	std::cout << "d0 + d1 == " << std::left << d0 + d1 << '\n' << '\n';

	std::cout << "i0 - i1 == " << std::left << i0 - i1 << '\n';
	std::cout << "i0 - d0 == " << std::left << i0 - d0 << '\n';
	std::cout << "d0 - d1 == " << std::left << d0 - d1 << '\n' << '\n';

	
	
	return 0;
}

