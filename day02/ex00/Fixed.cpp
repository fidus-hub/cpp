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
	_fixed = obj._fixed;
	std::cout << "Copy constuctor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	this->_fixed = obj._fixed;
	std::cout << "Copy Assignment operator called" << std::endl;
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