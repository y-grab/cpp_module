#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog&);
		Dog(const std::string& idea);
		Dog& operator=(const Dog&);
		~Dog();

		void		makeSound() const;
		std::string	getType() const;
	
	private:
		Brain	*_brain;
};

#endif