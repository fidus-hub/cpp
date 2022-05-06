#pragma once

#include <iostream>
#include <stack>


	template <typename T>
		class MutantStack : public std::stack<T>
		{
			public:
				MutantStack() {}

				typedef typename std::stack<T>::container_type::iterator iterator;
				typedef typename  std::stack<T>::container_type::const_iterator const_iterator;


				std::deque<int> d;


				iterator	begin()
				{
					return this->c.begin();
				}
				iterator	end()
				{
					return this->c.end();
				}
				const_iterator	begin() const
				{
				    return this->c.begin();
				}
				const_iterator	end() const
				{
					return this->c.end();
				}

		};