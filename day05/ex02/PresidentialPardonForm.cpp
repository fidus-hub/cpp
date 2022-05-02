#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :Form("president", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	_target = rhs._target;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
void	PresidentialPardonForm::execute(Bureaucrat const& executor)const
{
	if(getGradeState() == false)
		throw notSignedException();
	if (executor.getGrade() > getExecGrade())
		throw (notExecutedException());
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
	executor.executeForm(*this);
}

/* ************************************************************************** */