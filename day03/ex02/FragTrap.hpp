#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap:public ClapTrap
{

	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap();

		void attack(const std::string& target);
		void	highFivesGuy(void);

	private:
		FragTrap();
};

#endif /* ******************************************************** FRAGTRAP_H */