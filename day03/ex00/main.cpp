#include "ClapTrap.hpp"

//int	main( void )
//{
//	ClapTrap	Instance("Fidus");

//	Instance.attack("Fibo");
//	Instance.takeDamage(7);
//	Instance.beRepaired(5);
//	return 0;
//}

int main()
{
	ClapTrap A("Luffy");
	ClapTrap B("Kaido");

	std::cout << "game begins : " << std::endl;
	std::cout << A << std::endl;
	std::cout << B << std::endl;

	A.attack(B.getName());
	B.takeDamage(A.getAttackDamage());
	B.beRepaired(10);

	std::cout << "game over : " << std::endl;
	std::cout << A << std::endl;
	std::cout << B << std::endl;
}