#include "Zombie.hpp"

int main()
{
	size_t i = 0;
	Zombie* Horde = zombieHorde(5, "Zombie");
	while(i < 5)
	{
		Horde[i].announce();
		i++;
	}
	delete[] Horde;
}