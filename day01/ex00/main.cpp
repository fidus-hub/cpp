#include "Zombie.hpp"

int main()
{
	Zombie Zombie1("Zombie Uno");
	Zombie* Heap;

	Heap = newZombie("new ugly Zombie");

	randomChump("Random ugly Zombie");
	delete Heap;
}