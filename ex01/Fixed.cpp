#include "Fixed.hpp"

// Default construcotor
Fixed::Fixed() {
	this->fix_num = 0;
	std::cout << "Default constructor called" << std::endl;
}

//Copy constructor
Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	this->fix_num = other.getRawBits();
}

// Constructor for integer input
Fixed::Fixed(const int num) {
	std::cout << "Integer constructor called" << std::endl;
	this->fix_num = num << frac_bits; // Convert integer to fixed-point representation
}

// Constructor for float input
Fixed::Fixed (const float float_num) {
	std::cout << "Float constructor called" << std::endl;
 	this->fix_num = static_cast<int>(roundf(float_num * (1 << frac_bits))); // Convert float to fixed-point representation **STUDY WHY**
}

// Copy assignment operator
Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->fix_num = other.getRawBits();
	}
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
	//std::cout << "getRawBits member function called" << std::endl;
	return this->fix_num;
}

void Fixed::setRawBits(int const raw) {
	//std::cout << "setRawBits member function called" << std::endl;
	this->fix_num = raw;
}

float Fixed::toFloat(void) const {
	 return static_cast<float>(this->fix_num) / (1 << frac_bits); // Convert fixed-point to float
}

int Fixed::toInt(void) const {
	  return this->fix_num >> frac_bits; // Convert fixed-point to integer
}

// Overload the output operator to print the fixed-point number
std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
 os << fixed.toFloat(); // Output the fixed-point number as a float
 return os;
}