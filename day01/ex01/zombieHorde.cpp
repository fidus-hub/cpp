#include "Zombie.hpp"

Zombie*	zombieHorde(int N, string name)
{
	Zombie* zombies;
	zombies = new Zombie[N];
	string newName;
	while (N--)
	{
		newName = name + std::to_string(N);
		zombies[N].setName(newName);
	}
	return (zombies);
}