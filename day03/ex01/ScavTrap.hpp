#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include <string>

class ScavTrap:public ClapTrap
{

	public:

		ScavTrap(std::string name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();

		void attack(const std::string& target);
		void guardGate(void);

	private:
		ScavTrap();

};

#endif /* ******************************************************** SCAVTRAP_H */