#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/
Intern &		Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
Form*	Intern::makeForm( std::string name, std::string target)
{
	std::string	formsNames[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	Form* (*p[3])(std::string target);
	p[1] = ShrubberyCreationForm::make;
	p[0] = RobotomyRequestForm::make;
	p[2] = PresidentialPardonForm::make;

	for (int i = 0; i < 3; i++)
	{
		if (name == formsNames[i])
		{
			std::cout << "Intern creates " + name << std::endl;
			return p[i](target);
		}
	}
	throw Intern::FormNotFound();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
const char* Intern::FormNotFound::what() const throw()
{
	return "No such Form found!";
}

/* ************************************************************************** */