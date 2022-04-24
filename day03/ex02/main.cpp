#include "FragTrap.hpp"

int	main( void )
{
	FragTrap	Frag("Kaido");
	ClapTrap	Clap("Luffy");

	std::cout << "Game begins : " << std::endl;
	std::cout << Frag << std::endl;
	std::cout << Clap << std::endl;

	Clap.attack(Frag.getName());
	Clap.takeDamage(Frag.getAttackDamage());
	Clap.beRepaired(10);

	Frag.attack(Clap.getName());
	Frag.takeDamage(Clap.getAttackDamage());
	Frag.beRepaired(5);
	Frag.highFivesGuy();

	std::cout << "Game over : " << std::endl;
	std::cout << Frag << std::endl;
	std::cout << Clap << std::endl;
	return 0;
}

//int main()
//{
//	ScavTrap A("Luffy");
//	ScavTrap B("Kaido");
//	std::cout << "Game begins : " << std::endl;
//	std::cout << A << std::endl;
//	std::cout << B << std::endl;
//	A.guardGate();
//	A.attack(B.getName());
//	B.takeDamage(A.getAttackDamage());
//	B.beRepaired(10);
//	std::cout << "Game over : " << std::endl;
//	std::cout << A << std::endl;
//	std::cout << B << std::endl;
//}