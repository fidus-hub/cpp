#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

class Fixed
{
		int					_fixed;
		static int const	_bits;
	public:
		Fixed();
		Fixed(int n);
		Fixed(const Fixed &obj);
		~Fixed();
		Fixed 	&operator=(Fixed const & obj);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif