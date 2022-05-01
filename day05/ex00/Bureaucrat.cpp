#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
Bureaucrat::Bureaucrat()
{
	std::cout << "constructer called!" << std::endl;
}

Bureaucrat::Bureaucrat(std::string Name, int Grade)
{
	if (Grade < 1)
		throw (GradeTooHighException());
	else if (Grade > 150)
		throw (GradeTooLowException());
	_Name = Name;
	_Grade = Grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	this->_Grade = src._Grade;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << "destructer called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	this->_Grade = rhs._Grade;
	return *this;
}

std::ostream &			operator<<(std::ostream & o, Bureaucrat const & i)
{
	o << i.getName() << " Bureaucrat " << i.getGrade() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void Bureaucrat::increment()
{
	if (_Grade - 1 < 1)
		throw GradeTooHighException();
	else
		this->_Grade--;
}

void Bureaucrat::decrement()
{
	if (_Grade + 1 > 150)
		throw GradeTooLowException();
	else
		this->_Grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string Bureaucrat::getName() const
{
	return _Name;
}

int Bureaucrat::getGrade() const
{
	return _Grade;
}


/* ************************************************************************** */