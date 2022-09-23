/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:44:42 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/30 14:09:16 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	//subject tests
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl; // dog
		std::cout << i->getType() << " " << std::endl; // cat
		i->makeSound(); // cat sound
		j->makeSound(); // dog sound
		meta->makeSound(); //animal sound

		delete (meta);
		delete (j);
		delete (i);
	}
	// WrongAnimal tests
	std::cout << "-------------" << std::endl;
	{
		const WrongAnimal* wanimal = new WrongAnimal();
		const WrongAnimal* wcat = new WrongCat();

		wanimal->makeSound(); // wronganimal sound
		wcat->makeSound(); // wronganimal sound

		delete (wanimal);
		delete (wcat);
	}
	return (0);
}