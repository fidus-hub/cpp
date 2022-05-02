#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat	person("Lbacha", 4);
		Form		form("wara9at tana9ol", 5, 1);
		form.beSigned(person);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}