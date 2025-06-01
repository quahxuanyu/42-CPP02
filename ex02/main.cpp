#include "Fixed.hpp"
#include <iostream>

int main()
{
	// Fixed a(5.5f);	 // Fixed-point representation of 5.5
	// Fixed b(10.25f); // Fixed-point representation of 10.25
	// Fixed c(5.5f);	 // Same as a

	// std::cout << std::boolalpha; // Print true/false instead of 1/0

	// std::cout << "a > b? " << (a > b) << std::endl;	  // false
	// std::cout << "a < b? " << (a < b) << std::endl;	  // true
	// std::cout << "a >= c? " << (a >= c) << std::endl; // true
	// std::cout << "a <= c? " << (a <= c) << std::endl; // true
	// std::cout << "b <= a? " << (b <= a) << std::endl; // false
	// std::cout << "b >= a? " << (b >= a) << std::endl; // true

	// std::cout << "a + c? " << (a + c) << std::endl; // true
	// std::cout << "a + c? " << (a + b) << std::endl; // true

	// std::cout << "a++? " << (a++) << std::endl; // true
	// std::cout << "a? " << (a) << std::endl; // true
	// return 0;

	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}