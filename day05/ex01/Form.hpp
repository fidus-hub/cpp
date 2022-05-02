#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;

class Form
{

	public:

		Form();
		Form( std::string const name, int const signGrade, int const execGrade);
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

		std::string			getName( void ) const;
		bool				getGradeState( void ) const;
		int					getSignGrade( void ) const;
		int					getExecGrade( void ) const;
		void				beSigned(Bureaucrat &b);

		class GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};

	private:
		std::string const	_name;
		bool				_GradeState;
		int const 			_signGrade;
		int const 			_execGrade;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );
#endif /* ************************************************************ FORM_H */