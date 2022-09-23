/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:18:20 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/29 15:49:34 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) 
{
	FragTrap frag_trap("Frag");

	frag_trap.takeDamage(99);
	frag_trap.beRepaired(99);
	frag_trap.highFivesGuys();
	frag_trap.attack("target1");
}
