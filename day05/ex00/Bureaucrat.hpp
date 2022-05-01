#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
#include <exception>

class Bureaucrat
{
	public:

		Bureaucrat();
		Bureaucrat(std::string Name, int Grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;

		void increment();
		void decrement();

		class GradeTooHighException: public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException:public std::exception
		{
			const char* what() const throw();
		};

		Bureaucrat &		operator=( Bureaucrat const & rhs );

	private:
		std::string  _Name;
		int _Grade;
};

std::ostream &			operator<<(std::ostream & o, Bureaucrat const & i);

#endif /* ****************************************************** BUREAUCRAT_H */