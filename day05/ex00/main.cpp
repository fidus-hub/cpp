#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat person("chef", 1);
	std::cout << person << std::endl;
	try
	{
		person.increment();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << person << std::endl;
}