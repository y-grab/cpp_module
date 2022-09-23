#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const Animal &);
		Animal& operator=(const Animal &);
		virtual ~Animal();

		virtual void		makeSound() const;
		virtual std::string	getType() const;

	protected:
		std::string type;
};

#endif