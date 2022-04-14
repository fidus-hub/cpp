#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

class HumanA
{
		Weapon& _a;
		std::string _name;
	public:
		HumanA(std::string name, Weapon &type);
		~HumanA();
		void	attack();
		void	setType(std::string type);
};


#endif