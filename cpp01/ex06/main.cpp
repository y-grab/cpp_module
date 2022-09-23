/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:23:45 by ujicama           #+#    #+#             */
/*   Updated: 2022/07/26 19:24:17 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static void	test_complain(const char *filter)
{
	Harl	harl(filter);

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
}

int	main(int ac, const char **av)
{
	if (ac != 2)
	{
		std::cerr << "error: expected 1 filter argument: DEBUG, INFO, WARNING, ERROR" << std::endl;
		return (1);
	}
	test_complain(av[1]);
	return (0);
}