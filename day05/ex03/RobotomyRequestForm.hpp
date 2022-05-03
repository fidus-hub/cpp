#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class  RobotomyRequestForm: public Form
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(  RobotomyRequestForm const & src );
		~RobotomyRequestForm();

		RobotomyRequestForm &		operator=(  RobotomyRequestForm const & rhs );

		void	execute(Bureaucrat const & executor) const;
		static Form*	make( std::string target);

	private:
		std::string _target;

};

#endif /* ********************************************  ROBOTOMYREQUESTFORM_H */