#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog( const Dog & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/
Dog &		Dog::operator=( Dog const & rhs )
{
	_type = rhs._type;
	_brain = new Brain(*(rhs._brain));
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void Dog::makeSound() const
{
	std::cout << "wuuf! wuuf!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
Brain*	Dog::getBrain( void )
{
	return this->_brain;
}

/* ************************************************************************** */