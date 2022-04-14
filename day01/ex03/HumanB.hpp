#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
		Weapon *_b;
		std::string _name;
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &Weapon);
};


#endif