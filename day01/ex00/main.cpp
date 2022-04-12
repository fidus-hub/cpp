#include "Zombie.hpp"

int main()
{
	Zombie Zombie1 = Zombie("Zombie Uno");
	Zombie *newZ = newZombie("new ugly Zombie");
	randomChump("Random ugly Zombie");
	delete newZ;
}