#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

 RobotomyRequestForm:: RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :Form("Robotomize", 72, 45), _target(target)
{
}

RobotomyRequestForm:: RobotomyRequestForm( const  RobotomyRequestForm & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~ RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				 RobotomyRequestForm::operator=(  RobotomyRequestForm const & rhs )
{
	_target = rhs._target;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	RobotomyRequestForm::execute(Bureaucrat const& executor)const
{
	if(this->getGradeState() == false)
		throw notSignedException();
	if (executor.getGrade() > getExecGrade())
		throw (notExecutedException());

	std::cout << "DRRRrrrr...!!" << std::endl;
	if(rand() % 2 == 1)
	{
		std::cout << this->_target << " has been robotomized successfully!" << std::endl;
		executor.executeForm(*this);
	}
	else 
		std::cout << _target << " Robotomy Failed!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
Form* RobotomyRequestForm::make(std::string target)
{
	return (new RobotomyRequestForm(target));
}

/* ************************************************************************** */