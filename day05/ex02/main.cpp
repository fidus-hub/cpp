#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{
		try
		{
			Bureaucrat person("Fidus", 1);
			std::cout << person << std::endl;
			ShrubberyCreationForm shrub("outfile");
			shrub.beSigned(person);
			shrub.execute(person);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}

//RobotomyRequestForm
//PresidentialPardonForm