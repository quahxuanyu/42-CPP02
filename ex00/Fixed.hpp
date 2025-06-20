#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
	private:
		int fix_num;
		static const int frac_num = 8;
	public:
		Fixed(); // Default constructor
		Fixed(const Fixed &other); // Copy constructor
		Fixed &operator=(const Fixed &other); // Assignment operator
		~Fixed(); // Destructor
		int getRawBits(void)const;
		void setRawBits(int const raw);
};

#endif