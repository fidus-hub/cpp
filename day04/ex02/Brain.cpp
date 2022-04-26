#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = "Idea " + std::to_string(i);
	}
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain( const Brain & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for(int i = 0; i < 100; i++)
		{
			this->ideas[i] = rhs.ideas[i];
		}
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
	void Brain::printIdeas()
	{
	for(int i = 0; i < 100; i++)
	{
		std::cout << ideas[i] << std::endl;
	}		
	}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */