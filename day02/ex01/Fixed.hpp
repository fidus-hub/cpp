#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <cmath>

class Fixed
{
		int					_fixed;
		static int const	_bits;
	public:
		Fixed();
		Fixed(int);
		Fixed (const float);
		Fixed(const Fixed &obj);
		~Fixed();
		Fixed	&operator=(Fixed const & obj);
		int getRawBits(void) const;
		void setRawBits(int const raw);

		float	toFloat(void) const;
		int 	toInt(void) const;
};
std::ostream	&operator<<(std::ostream& os, const Fixed &obj);

#endif