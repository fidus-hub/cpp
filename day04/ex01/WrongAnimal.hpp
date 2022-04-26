#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal();

		WrongAnimal &		operator=( WrongAnimal const & rhs );

		std::string		getType() const;
		void			setType(std::string type);
		void			makeSound()const;

	protected:
		std::string _Type;

};


#endif /* ***************************************************** WRONGANIMAL_H */