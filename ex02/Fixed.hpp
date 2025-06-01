#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
	private:
		int fix_num;
		static const int frac_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed(const int num);
		Fixed(const float float_num);
		Fixed &operator=(const Fixed &other);
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;
		Fixed operator+(const Fixed &other);
		Fixed operator-(const Fixed &other);
		Fixed operator*(const Fixed &other);
		Fixed operator/(const Fixed &other);
		Fixed operator++(int); // Postfix increment
		Fixed &operator++(); // Prefix increment
		Fixed operator--(int); // Postfix decrement
		Fixed &operator--();   // Prefix decrement
		~Fixed();
		int getRawBits(void)const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		friend std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
		static Fixed &min(Fixed &a, Fixed &b); //min
		static Fixed &max(Fixed &a, Fixed &b); //max
		static const Fixed &min(const Fixed &a, const Fixed &b); //const min
		static const Fixed &max(const Fixed &a, const Fixed &b); //const max
};

#endif