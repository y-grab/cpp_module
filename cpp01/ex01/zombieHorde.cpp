/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:35:54 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/26 16:22:58 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (nullptr);
	Zombie *zombie_horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		std::string tmp = name + "_" + std::to_string(i);
		zombie_horde[i].setName(tmp);
	}
	return (zombie_horde);
}