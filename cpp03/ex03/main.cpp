/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:18:20 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/29 18:21:12 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) 
{
	DiamondTrap diamond_trap("Diamond");

	diamond_trap.takeDamage(99);
	diamond_trap.beRepaired(99);
	diamond_trap.guardGate();
	diamond_trap.highFivesGuys();
	diamond_trap.attack();
	diamond_trap.attack();
	diamond_trap.attack();
	diamond_trap.whoAmI();
}
