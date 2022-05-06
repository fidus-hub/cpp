#pragma once

#include <list>
#include <deque>
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>



template <typename T>
void	easyfind(T &toSearch, int toFind)
{
	typename T::iterator ptr;
	ptr = find(toSearch.begin(), toSearch.end(), toFind);
	if (ptr == toSearch.end())
		throw std::string("Not found");
	std::cout << "Found: " << toFind << std::endl;
}
