#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

# define	string std::string
# define	cout std::cout
# define	cin std::cin
# define	endl std::endl
# define	setw std::setw
# define	setfill std::setfill
# define	left std::left
# define	getline std::getline

class Zombie
{
		string _name;
	public:
		Zombie(string name);
		Zombie();
		~Zombie();
		void	setName(string name);
		void	announce(void);
};
Zombie*	zombieHorde( int N, string name );

#endif