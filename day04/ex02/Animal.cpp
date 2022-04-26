#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal( const Animal & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/
Animal &				Animal::operator=(Animal const & rhc)
{
	_type = rhc._type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void Animal::makeSound() const
{
	std::cout << "ANIMAL need a sound!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
void Animal::setType(std::string type)
{
	_type = type;
}

std::string	Animal::getType(void) const
{
	return _type;
}

/* ************************************************************************** */