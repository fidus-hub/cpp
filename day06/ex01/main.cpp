#include "Serialization.hpp"

int main()
{
	Data *ptr = new Data;
	uintptr_t raw;

	ptr->testVar = 1337;
	std::cout << "Data ptr before cast: " << ptr << std::endl;
	raw = serialize(ptr);
	std::cout << "Data ptr cast to uint: " << raw << std::endl;
	ptr = deserialize(raw);
	std::cout << "Data ptr after recast: " << ptr << std::endl;
	std::cout << ptr->testVar << std::endl;
}