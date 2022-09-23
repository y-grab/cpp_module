/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:01:05 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/26 16:23:41 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 10;
    Zombie *horde = zombieHorde(N, std::string("foo"));
    if (horde == NULL)
		return (1);
    for (int i = 0; i < N; i++)
        horde[i].announce();
    delete[] horde;
    return (0);
}