#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	this->operator=(src);
}

ClapTrap::ClapTrap( std::string name) : _Name(name)
{
	this->_HitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	_Name = rhs._Name;
	_HitPoints = rhs._HitPoints;
	_energyPoints = rhs._energyPoints;
	_attackDamage = rhs._attackDamage;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ClapTrap  & i)
{
	o << "Name: " << i.getName() << std::endl;
	o << "Hit Points : " << i.getHitPoint() << std::endl;
	o << "Energy Points : " << i.getEnergyPoints() << std::endl;
	o << "Attack Damage : " << i.getAttackDamage() << std::endl; 
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " + this->_Name + " attack " + target + " causing " << this->_attackDamage << " points of damage!"<< std::endl;
	this->_energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
   std:: cout << "ClapTrap " << _Name << " takes " << amount << " of damage!" << std::endl;
    _HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _Name << " heals " << amount << ", point of health!" << std::endl;
	this->_energyPoints -= 1;
	_HitPoints += amount;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
void ClapTrap::setHitPoint(int const amount)
{
	_HitPoints = amount;
}

void ClapTrap::setEnergyPoints(int const amount)
{
	_energyPoints = amount;
}

void ClapTrap::setAttackDamage(int const amount)
{
	_attackDamage = amount;
}


std::string ClapTrap::getName(void)
{
	return _Name;
}

int  ClapTrap::getHitPoint(void)
{
	return _HitPoints;
}

int  ClapTrap::getEnergyPoints(void)
{
	return _energyPoints;
}

int  ClapTrap::getAttackDamage(void)
{
	return _attackDamage;
}
/* ************************************************************************** */