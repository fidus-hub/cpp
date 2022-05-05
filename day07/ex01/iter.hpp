#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>


template<typename T>
void iter(T *array, int size, void (*fun)(T const &))
{
	for (int i = 0; i < size; i++)
		fun(array[i]);
}

#endif