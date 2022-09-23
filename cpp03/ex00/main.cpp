/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:18:20 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/29 14:31:47 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) 
{
	ClapTrap clap_trap("Crap");

	//clap_trap.takeDamage(10); // does nothing past here
	
	clap_trap.takeDamage(1); //does not waste energy
	clap_trap.beRepaired(1); //cost 1 energy
	clap_trap.attack("target1"); //cost 1 energy
	clap_trap.attack("target2");
	clap_trap.attack("target3");
	clap_trap.attack("target4");
	clap_trap.attack("target5");
	clap_trap.attack("target6");
	clap_trap.attack("target7");
	clap_trap.attack("target8");
	clap_trap.attack("target9");
	//does nothing because 0 energy
	clap_trap.attack("target10");
	clap_trap.attack("target11");
	clap_trap.beRepaired(1);
}
