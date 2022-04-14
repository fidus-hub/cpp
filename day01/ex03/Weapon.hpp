#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

class Weapon
{
		std::string _Type;
	public:
		void		setType(std::string type);
		std::string	const& getType();
		Weapon();
		Weapon(std::string type);
};


#endif