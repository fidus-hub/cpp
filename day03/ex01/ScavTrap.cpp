#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called!\n";
	this->_HitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	this->operator=(src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/




/*
** --------------------------------- METHODS ----------------------------------
*/
void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " + this->_Name + " attack " + target + " causing " << this->_attackDamage << " points of damage!"<< std::endl;
	this->_energyPoints -= 1;
}

void	ScavTrap::guardGate( void )
{
	std::cout << _Name << " is in Gate guardian mode!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */