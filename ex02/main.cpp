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
/*
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
*/

    Fixed a; // Default constructor
    Fixed b(10); // Int constructor
    Fixed c(42.42f); // Float constructor
    Fixed d(b); // Copy constructor

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;

    a = Fixed(5.05f); // Assignment operator
    std::cout << "a after assignment: " << a << std::endl;

    // Comparison operators
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;

    // Arithmetic operators
    std::cout << "a + b: " << (a + b) << std::endl;
    std::cout << "a - b: " << (a - b) << std::endl;
    std::cout << "a * b: " << (a * b) << std::endl;
    std::cout << "a / b: " << (a / b) << std::endl;

    // Increment/Decrement
    Fixed e = a;
    std::cout << "e: " << e << std::endl;
    std::cout << "e++: " << e++ << std::endl;
    std::cout << "After e++: " << e << std::endl;
    std::cout << "++e: " << ++e << std::endl;
    std::cout << "e--: " << e-- << std::endl;
    std::cout << "After e--: " << e << std::endl;
    std::cout << "--e: " << --e << std::endl;

    // getRawBits/setRawBits
    std::cout << "e.getRawBits(): " << e.getRawBits() << std::endl;
    e.setRawBits(256);
    std::cout << "e after setRawBits(256): " << e << std::endl;

    // toFloat/toInt
    std::cout << "e.toFloat(): " << e.toFloat() << std::endl;
    std::cout << "e.toInt(): " << e.toInt() << std::endl;

    // min/max
    Fixed f(2.5f), g(3.5f);
    std::cout << "min(f, g): " << Fixed::min(f, g) << std::endl;
    std::cout << "max(f, g): " << Fixed::max(f, g) << std::endl;
    const Fixed h(4.5f), i(1.5f);
    std::cout << "min(h, i): " << Fixed::min(h, i) << std::endl;
    std::cout << "max(h, i): " << Fixed::max(h, i) << std::endl;

    return 0;
}