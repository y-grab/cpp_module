#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	public:
		Animal& operator=(const Animal &);
		virtual ~Animal();

		virtual void		makeSound() const = 0;
		virtual std::string	getType() const = 0;

	protected:
		std::string type;
		Animal();
		Animal(const Animal &);
};

#endif