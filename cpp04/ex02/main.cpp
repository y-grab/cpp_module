/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:44:42 by ujicama           #+#    #+#             */
/*   Updated: 2022/08/02 17:17:50 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	/*
	//Trying to create animals does not compile
	{ 
		Animal	animal;
		Animal	*animal2 = new Animal();
		delete (animal2);
	}
	*/
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
