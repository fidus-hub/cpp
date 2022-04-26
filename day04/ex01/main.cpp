#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Animal *animals[4];

	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	std::cout << "----------------------------" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete animals[i];
	}
	std::cout << "----------------------------" << std::endl;
	Cat Cat1;
	Cat	Cat2(Cat1);
	
	//Brain *Idea;

	//Idea = Cat1.getBrain();
	//(*Idea).printIdeas();

	std::cout << "Cat1 brain: " << Cat1.getBrain() << std::endl;
	std::cout << "Cat2 brain: " << Cat2.getBrain() << std::endl;
	
	return 0;

}