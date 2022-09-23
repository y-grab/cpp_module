/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:18:20 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/29 18:19:48 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) 
{
	ScavTrap	scav_trap("Scav");
	
	scav_trap.takeDamage(10);
	scav_trap.takeDamage(10);
	scav_trap.takeDamage(10);
	scav_trap.takeDamage(10);
	scav_trap.takeDamage(10);
	scav_trap.beRepaired(50);
	scav_trap.attack();
	scav_trap.guardGate();
	
}
