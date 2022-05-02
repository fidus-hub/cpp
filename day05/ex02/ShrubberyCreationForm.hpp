#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm();

		void	execute(Bureaucrat const &person) const;

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

	private:
		std::string _target;

};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */