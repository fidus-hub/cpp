#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _a(type)
{
	_name = name;
}

HumanA::~HumanA()
{
	std::cout << "HumanA DESTROYED" << std::endl;
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with  his " << _a.getType() << std::endl;
}

void	HumanA::setType(std::string type)
{
	_a = type;
}