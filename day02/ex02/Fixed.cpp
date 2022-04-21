#include "Fixed.hpp"

Fixed::Fixed()
{
	_fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constuctor called" << std::endl;
	*this = obj;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy Assignment operator called" << std::endl;
	this->_fixed = obj._fixed;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixed;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixed = raw;
}

//ex01

int const Fixed::_bits = 8;

float Fixed::toFloat(void) const
{
	float f;
	f = this->_fixed / (pow(2,Fixed::_bits));
	return f;
}

int Fixed::toInt(void) const
{
	int i;
	i = this->_fixed / (pow(2,Fixed::_bits));
	return i;
}

Fixed::Fixed(const int i)
{
	float a;

	std::cout << "Int Constractor called" << std::endl;
	a = i * (pow(2, Fixed::_bits));
	this->_fixed = a; //= roundf(a);
}

Fixed::Fixed(const float f)
{
	float b;

	std::cout << "float Constractor called" << std::endl;
	b = f * (pow(2, Fixed::_bits));
	this->_fixed = roundf(b);
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
	os << obj.toFloat();
	return os;
}

//ex02

//comparison operators
bool				Fixed::operator>(Fixed const & rhs) const
{
	return (this->_fixed > rhs._fixed);
}
bool				Fixed::operator<(Fixed const & rhs) const
{
	return (this->_fixed < rhs._fixed);
}
bool				Fixed::operator<=(Fixed const & rhs) const
{
	return (this->_fixed <= rhs._fixed);
}
bool				Fixed::operator>=(Fixed const & rhs) const
{
	return (this->_fixed >= rhs._fixed);
}
bool				Fixed::operator!=(Fixed const & rhs) const
{
	return (this->_fixed != rhs._fixed);
}
bool				Fixed::operator==(Fixed const & rhs) const
{
	return (this->_fixed == rhs._fixed);
}
//arithmetic operators

Fixed			Fixed::operator+(const Fixed &b) const
{
	Fixed		f;

	f.setRawBits( this->getRawBits() + b.getRawBits());
	return (f);
}
Fixed				Fixed::operator-(const Fixed &b) const
{
	Fixed		f;

	f.setRawBits( this->getRawBits() - b.getRawBits());
	return (f);
}

Fixed				Fixed::operator*(const Fixed &b) const
{
	Fixed		f;
	f.setRawBits(((long long)this->getRawBits() * b.getRawBits()) / pow(2, 8));
	return (f);
}

Fixed				Fixed::operator/(const Fixed &b) const
{
	Fixed		f;
	f.setRawBits(((long long)this->getRawBits() * pow(2, 8)) / b.getRawBits());
	return (f);
}
//increment/decrement/pre-increment/post-increment...

Fixed& 				Fixed::operator++()
{
	++(this->_fixed);
	return (*this);
}

Fixed& 				Fixed::operator--()
{
	--(this->_fixed);
	return (*this);
}

Fixed 				Fixed::operator++(int)
{
	Fixed	f;
	
	f.setRawBits( this->_fixed);
	this->_fixed++;
	return (f);
}
Fixed 				Fixed::operator--(int)
{
	Fixed	f;
	
	f.setRawBits( this->_fixed);
	this->_fixed--;
	return (f);
}

Fixed&		Fixed::max(Fixed& a, Fixed&b)
{
	return (a<b)?b:a;
}
const Fixed&		Fixed::max(const Fixed& a, const Fixed&b)
{
	 return ((Fixed&)a<(Fixed&)b)?(Fixed&)b:(Fixed&)a;
}
Fixed&		Fixed::min(Fixed& a, Fixed&b)
{
	return !(b<a)?a:b; 
}
const Fixed&		Fixed::min(const Fixed& a, const Fixed&b)
{
	return a > b ? b : a; 
}