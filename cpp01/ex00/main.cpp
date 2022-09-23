/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:02:56 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/26 15:11:50 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie zombieStack = Zombie("stack");
	Zombie *zombieHeap = new Zombie("heap");
	Zombie *zombieNew = newZombie("newZombie");

	zombieStack.announce();
	zombieHeap->announce();
	zombieNew->announce();
	randomChump("randomChump");
	delete zombieHeap;
	delete zombieNew;
	return (0);
}
