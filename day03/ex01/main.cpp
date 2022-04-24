#include "ScavTrap.hpp"

int	main( void )
{
	ScavTrap	Scav("Kaido");
	ClapTrap	Clap("Luffy");

	std::cout << "Game begins : " << std::endl;
	std::cout << Scav << std::endl;
	std::cout << Clap << std::endl;

	Clap.attack(Scav.getName());
	Clap.takeDamage(Scav.getAttackDamage());
	Clap.beRepaired(10);

	Scav.attack(Clap.getName());
	Scav.takeDamage(Clap.getAttackDamage());
	Scav.beRepaired(5);
	Scav.guardGate();

	std::cout << "Game over : " << std::endl;
	std::cout << Scav << std::endl;
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