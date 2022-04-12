#include "Zombie.hpp"

Zombie* newZombie(string name)
{
	Zombie* new_Zombie = new Zombie(name);
	return new_Zombie;
}
