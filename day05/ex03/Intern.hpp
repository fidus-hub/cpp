#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
#include "Form.hpp"
# include <iostream>
# include <string>
# include <exception>

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );

		Form*	makeForm(std::string name, std::string target);

		class FormNotFound:public std::exception
		{
			const char* what() const throw();
		};

	private:

};

#endif /* ********************************************************** INTERN_H */