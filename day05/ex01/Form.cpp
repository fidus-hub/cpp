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
	o << "Form name: " << i.getName() << std::endl;
	o << "Sign Grade: " << i.getSignGrade() << std::endl;
	o << "Execution Grade: " << i.getExecGrade() << std::endl;
	if (i.getGradeState() == true)
		o <<"the form is currently signed";
	else
		o << "The form is currently not signed";
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

const char* Form::GradeTooHighException::what() const throw()
{
	return "grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "grade is too low";
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