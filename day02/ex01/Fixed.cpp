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
