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
		~Fixed();
		int getRawBits(void)const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		friend std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
};

#endif