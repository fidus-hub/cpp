#include "Zombie.hpp"


void	Zombie::setName(string name)
{
	_name = name;
}

void Zombie::announce(void)
{
	cout << _name << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::Zombie(string name)
{
	_name = name;
}

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	cout << "Zombie name :" << _name << " Destroyed" << endl; 
}