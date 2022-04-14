#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::~HumanB()
{
	std::cout << "HumanB DESTROYED" << std::endl;
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with  his " << _b->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &type)
{
	_b = &type;
}