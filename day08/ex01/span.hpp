#pragma once

# include <iostream>
# include <string>
# include <exception>
# include <algorithm>
# include <vector>
# include <cstdlib>

class Span
{

	public:

		Span( unsigned int N );
		Span( Span const & src );
		virtual ~Span();
		Span & operator=(Span const & src);
		void	addNumber( int n);
		void	addNumbers( unsigned int n );
		int		shortestSpan( void );
		int		longestSpan( void );


		class SpaNotFound : public std::exception
		{
			public:
				virtual const char* what() const throw(){return "Span not found!";}
		};
		class ContainerFull : public std::exception
		{
			public:
				virtual const char* what() const throw(){return "Container is full!";}
		};
		
	private:
		std::vector<int> _vect;
		unsigned int	_size;
};