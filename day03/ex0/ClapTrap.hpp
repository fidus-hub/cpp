#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		ClapTrap &		operator=( ClapTrap const & rhs );

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void setName(std::string const name);
		void setHitPoint(int const amount);
		void setEnergyPoints(int const amount);
		void setAttackDamage(int const amount);
		std::string getName(void);
		int  getHitPoint(void);
		int  getEnergyPoints(void);
		int  getAttackDamage(void);

	private:
		std::string		_Name;
		unsigned int	_HitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

std::ostream &			operator<<( std::ostream & o, ClapTrap  & i);

#endif /* ******************************************************** CLAPTRAP_H */