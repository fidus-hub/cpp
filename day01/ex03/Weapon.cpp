#include "Weapon.hpp"

Weapon::Weapon(std::string Type)
{
	setType(Type);
}

void	Weapon::setType(std::string Type)
{
	_Type = Type;
}

const std::string &Weapon::getType()
{
	return (_Type);
}