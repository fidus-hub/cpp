#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/
WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & src )
{
	_Type = src._Type;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void WrongAnimal::makeSound()const
{
	std::cout << "WrongANIMAL need a sound!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
void WrongAnimal::setType(std::string type)
{
	_Type = type;
}

std::string	WrongAnimal::getType(void) const
{
	return _Type;
}

/* ************************************************************************** */