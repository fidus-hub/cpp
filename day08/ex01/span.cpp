#include "span.hpp"


/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
Span::Span( unsigned int N ) : _vect() ,_size(N)
{
}

Span::Span(Span const & src)
{
	this->operator=(src);
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/
Span & Span::operator=(Span const & src)
{
	this->_size = src._size;
	this->_vect = src._vect;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void	Span::addNumber( int nbr )
{
	if (_vect.size() < this->_size)
		_vect.push_back(nbr);
	else
		throw Span::ContainerFull();
}

void	Span::addNumbers( unsigned int n )
{
	srand(time(NULL));
	for (size_t i = 0; i < n; i++)
	{
		if (i >= _size)
			throw ContainerFull();
		else 
			this->_vect.push_back(rand());
	}
}

int		Span::longestSpan( void )
{
	if (this->_vect.size() <= 1)
		throw Span::SpaNotFound();
	int max = *std::max_element(_vect.begin(), _vect.end());
	int min = *std::min_element(_vect.begin(), _vect.end());
	return (max - min);
}

int		Span::shortestSpan( void )
{
	if (this->_vect.size() <= 1)
		throw Span::SpaNotFound();
	std::sort(_vect.begin(), _vect.end());
	int min_dist = _vect[1] - _vect[0];
	for (unsigned long i = 1; i < _vect.size(); i++)
		if ((_vect[i] - _vect[i - 1]) < min_dist)
			min_dist = (_vect[i] - _vect[i - 1]);
	return (min_dist);
}