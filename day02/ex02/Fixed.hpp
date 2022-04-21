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


		bool				operator>(Fixed const & rhs) const;
		bool				operator<(Fixed const & rhs) const;
		bool				operator<=(Fixed const & rhs) const;
		bool				operator>=(Fixed const & rhs) const;
		bool				operator!=(Fixed const & rhs) const;
		bool				operator==(Fixed const & rhs) const;
		Fixed				operator+(const Fixed &b) const;
		Fixed				operator-(const Fixed &b) const;
		Fixed				operator*(const Fixed &b) const;
		Fixed				operator/(const Fixed &b) const;
		Fixed& 				operator++();	
		Fixed& 				operator--();	
		Fixed 				operator++(int);
		Fixed 				operator--(int);
		static  Fixed&		max(Fixed& a, Fixed&b);
		static const Fixed&		max(const Fixed& a, const Fixed&b);
		static  Fixed&		min(Fixed& a, Fixed&b);
		static const Fixed&		min(const Fixed& a, const Fixed&b);
};
std::ostream	&operator<<(std::ostream& os, const Fixed &obj);

#endif