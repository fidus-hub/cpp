#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete i;
		delete j;
		delete meta;
	}
	std::cout << "*_____________________________________*" << std::endl;
	{
		const WrongAnimal* WrongMeta = new WrongAnimal();
		const WrongAnimal* Wrong_i = new WrongCat();

		std::cout << WrongMeta->getType() << " " << std::endl;
		std::cout << Wrong_i->getType() << " " << std::endl;
		WrongMeta->makeSound();
		Wrong_i->makeSound();

		delete WrongMeta;
		delete Wrong_i;
	}
}