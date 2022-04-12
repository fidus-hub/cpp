#include "Zombie.hpp"

void Zombie::announce(void)
{
	cout << _name << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::Zombie(string name)
{
	_name = name;
	announce();
}

Zombie::~Zombie()
{
	cout << "Zombie name :" << _name << endl; 
}