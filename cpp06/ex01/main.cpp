/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:10:35 by ujicama           #+#    #+#             */
/*   Updated: 2022/08/09 16:55:02 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

struct Data
{
	int a, b;
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main(void)
{
	Data data1 = {0, 1};
	Data *ptr1 = deserialize(serialize(&data1));
	//ptr1 == &data1
	std::cout << ptr1 << " | " << &data1 << std::endl;
	std::cout << (ptr1 == &data1 ? "same pointers" : "pointers differ") << std::endl;
	std::cout << "-------------------------------" << std::endl;
	Data data2 = {0, 1};
	//ptr1 != &data2
	std::cout << ptr1 << " | " << &data2 << std::endl;
	std::cout << (ptr1 == &data2 ? "same pointers" : "pointers differ") << std::endl;
	return 0;
}
