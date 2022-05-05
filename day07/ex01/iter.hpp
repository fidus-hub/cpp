#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>


template<typename T>
void iter(T *array, int size, void (*funct)(T))
{
	for (int i = 0; i < size; i++)
		funct(array[i]);
}

#endif