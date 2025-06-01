#include "Fixed.hpp"

void DisplayMessage(std::string message) {
	(void) message;
	//std::cout << message << std::endl;
}

// Default construcotor
Fixed::Fixed() {
	this->fix_num = 0;
	DisplayMessage("Default constructor called");
}

//Copy constructor
Fixed::Fixed(const Fixed &other) {
	DisplayMessage("Copy constructor called");
	this->fix_num = other.getRawBits();
}

// Constructor for integer input
Fixed::Fixed(const int num) {
	DisplayMessage("Integer constructor called");
	this->fix_num = num << frac_bits; // Convert integer to fixed-point representation
}

// Constructor for float input
Fixed::Fixed (const float float_num) {
	DisplayMessage("Float constructor called");
 	this->fix_num = static_cast<int>(roundf(float_num * (1 << frac_bits))); // Convert float to fixed-point representation **STUDY WHY**
}

// Copy assignment operator
Fixed &Fixed::operator=(const Fixed &other) {
	DisplayMessage("Copy assignment operator called");
	if (this != &other) {
		this->fix_num = other.getRawBits();
	}
	return *this;
}

//COMPARISON OPERATORS
bool Fixed::operator>(const Fixed &other) const {
	DisplayMessage("Greater than operator called");
	return (this->fix_num > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const {
	DisplayMessage("Less than operator called");
	return (this->fix_num < other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const
{
	DisplayMessage("Greater than or equal to operator called");
	return (this->fix_num >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const
{
	DisplayMessage("Less than or equal to operator called");
	return (this->fix_num <= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const
{
	DisplayMessage("Equal to operator called");
	return (this->fix_num == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const
{
	DisplayMessage("Not equal to operator called");
	return (this->fix_num != other.getRawBits());
}


// MATHEMATICAL OPERATORS
Fixed Fixed::operator+(const Fixed &other) {
	DisplayMessage("+ operator called");
	Fixed result;
	result.setRawBits(this->fix_num + other.getRawBits());
	return result;
}

Fixed Fixed::operator-(const Fixed &other) {
	DisplayMessage("- operator called");
	Fixed result;
	result.setRawBits(this->fix_num - other.getRawBits());
	return result;
}

Fixed Fixed::operator*(const Fixed &other) {
	DisplayMessage("* operator called");
	Fixed result;
	result.setRawBits((this->fix_num * other.getRawBits()) >> frac_bits);
	return result;
}

Fixed Fixed::operator/(const Fixed &other) {
	DisplayMessage("/ operator called");
	Fixed result;
	result.setRawBits((this->fix_num << frac_bits)/ other.getRawBits());
	return result;
}

// INCREMENT AND DECREMENT OPERATORS
Fixed Fixed::operator++(int) { 						
	Fixed temp = *this;
	this->fix_num++;
	return temp; 
}

Fixed &Fixed::operator++() {	
	this->fix_num++;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed temp = *this; 
	this->fix_num--;
	return temp;		
}\

Fixed &Fixed::operator--() {
	this->fix_num--; 
	return *this;	 
}

Fixed::~Fixed() {
 DisplayMessage("Destructor called");
 // No dynamic memory to free, so nothing to do here
}

int Fixed::getRawBits(void) const {
	return this->fix_num;
}

void Fixed::setRawBits(int const raw) {
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

// Static member functions for min and max
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
  		return a;
 	else
  		return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	else
		return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return a;
	else
		return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	else
		return b;
}