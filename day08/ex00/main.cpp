#include "easyfind.hpp"


int main()
{
	std::vector<int> tab;
	tab.push_back(1);
	tab.push_back(1);
	tab.push_back(1);
	tab.push_back(1337);
	tab.push_back(1);
	tab.push_back(1);
	try
	{
		easyfind(tab, 1337);
		easyfind(tab, 42);
	}
	catch(std::string e)
	{
		std::cout << "Error: " << e << std::endl;
	}
}
