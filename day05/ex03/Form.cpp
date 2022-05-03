#include "Form.hpp"
#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(): _name("Default"), _GradeState(0), _signGrade(0), _execGrade(0)
{
}

Form::Form( std::string const name, int const sGrade, int const eGrade): _name(name), _GradeState(0), _signGrade(sGrade), _execGrade(eGrade)
{
	if (sGrade < 1 || eGrade < 1)
		throw GradeTooHighException();
	if (sGrade > 150 || eGrade > 150)
		throw GradeTooLowException();
}
Form::Form(const Form & src): _name(src._name), _GradeState(src._GradeState), _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
    this->_GradeState = rhs._GradeState;
	return(*this);
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	if (i.getGradeState() == true)
		o <<"The Bureaucrat can sign the form and is currently signed";
	else
		o << "The Bureaucrat can't sign the form and is currently not signed";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= _signGrade)
	{
		_GradeState = true;
		b.signForm(*this);
	}
	else
		throw (GradeTooLowException());
}

// void	Form::execute(Bureaucrat const &executor) const
// {
// 	if (this->getExecGrade() == false)
// 		throw(notSignedException());
// 	if (executor.getGrade() > _execGrade)
// 		throw(notExecutedException());
// 	executor.executeForm(*this);
// }



const char* Form::GradeTooHighException::what() const throw()
{
	return "grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "grade is too low";
}

const char* Form::notSignedException::what() const throw()
{
	return "Not Signed";
}
const char* Form::notExecutedException::what() const throw()
{
	return "Not Executed";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string	 Form::getName() const
{
	return _name;
}

int		Form::getExecGrade() const
{
	return _execGrade;
}

int		Form::getSignGrade() const
{
	return _signGrade;
}

bool	Form::getGradeState() const
{
	return _GradeState;
}


/* ************************************************************************** */