/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:44:42 by ujicama           #+#    #+#             */
/*   Updated: 2022/08/01 16:54:21 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{	
	// subject tests
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j; //should not create a leak
		delete i;
	}
	//more tests
	std::cout << "--------------" << std::endl;
	{
		int n = 10;
		Animal *animals[n];

		for (int i = 0; i < n; i++) {
        	if (i & 1)
            	animals[i] = new Dog();
        	else
        	    animals[i] = new Cat();
    	}
    	for (int i = 0; i < n; i++) {
    	    delete animals[i];
    	}
	}
	return (0);
}