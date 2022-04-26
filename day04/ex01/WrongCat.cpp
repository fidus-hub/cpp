#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
{
	_Type = "WrongCat";
	std::cout << "WrongCat default constructor called!" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	_Type = rhs._Type;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	WrongCat::makeSound() const
{
	std::cout << "WrongCat : Meeeeow" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */