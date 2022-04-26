#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	_type = "cat";
	_brain = new Brain();
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat( const Cat & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/
Cat &		Cat::operator=( Cat const & rhs )
{
	_type = rhs._type;
	_brain = new Brain(*(rhs._brain));
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound() const
{
	std::cout << "Purrrrr" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
Brain*	Cat::getBrain( void )
{
	return this->_brain;
}


/* ************************************************************************** */