#include "iter.hpp"


void	Uper(const char & word)
{
	if (word > 96 && word < 123)
		std::cout << (char)(word - 32);
	else
		std::cout << (char)(word);
}

void Print(const int & array)
{
	std::cout << array << " ";
}

int main()
{
	char	str[8] = "grisSen";
	int		arr[4] = {1, 3, 3, 7};

	iter(str, 8, Uper);
	std::cout << std::endl;
	iter(arr, 4, Print);
	return 0;
}