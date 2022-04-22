#include "Fixed.hpp"

int main(void)
{
	Fixed a;// kadkhlel ldefault constructor,-->_fixed=0
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
return 0;
}