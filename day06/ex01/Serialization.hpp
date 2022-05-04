#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <string>

struct Data
{
	int		testVar;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif