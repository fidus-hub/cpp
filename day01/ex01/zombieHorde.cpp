#include "Zombie.hpp"

Zombie*	zombieHorde(int N, string name)
{
	int i = 0;
	Zombie* zombies;
	zombies = new Zombie[N];
	string newName;
	while (i < N)
	{
		newName = name + std::to_string(i);
		zombies[i].setName(newName);
		i++;
	}
	return (zombies);
}