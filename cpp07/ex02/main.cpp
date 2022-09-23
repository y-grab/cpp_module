/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:56:36 by ujicama           #+#    #+#             */
/*   Updated: 2022/08/10 15:35:56 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
	{
		std::cout << "SIZE 0 ARRAY TEST" << std::endl;
		::Array<int> arr;
		std::cout << "arr size = " << arr.size() << std::endl;
	}
	{
		std::cout << "SIZE 5 INT ARRAY TEST" << std::endl;
		::Array<int> arr(5);
		std::cout << "arr size = " << arr.size() << std::endl;
		for (int i = 0; i < arr.size(); i++)
		{
			arr[i] += i;
			std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
		}
		// trying to access index out of range
		try
		{
			std::cout << "arr[5] = " << arr[5] << std::endl; 
		}
		catch (std::out_of_range &e)
		{
			std::cout << e.what() << std::endl;
		}
		
	}
	{
		std::cout << "SIZE 5 FLOAT ARRAY TEST" << std::endl;
		::Array<float> arr(5);
		std::cout << "arr size = " << arr.size() << std::endl;
		for (int i = 0; i < arr.size(); i++)
		{
			arr[i] += i + 0.1f;
			std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
		}
		// trying to access index out of range
		try
		{
			std::cout << "arr[5] = " << arr[5] << std::endl; 
		}
		catch (std::out_of_range &e)
		{
			std::cout << e.what() << std::endl;
		}
		
	}
	{
		std::cout << "SIZE 5 STRING ARRAY TEST" << std::endl;
		::Array<std::string> arr(5);
		std::cout << "arr size = " << arr.size() << std::endl;
		for (int i = 0; i < arr.size(); i++)
		{
			std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
		}
		std::cout << "again but arr[i] += \"HELLO\"" << std::endl;
		for (int i = 0; i < arr.size(); i++)
		{
			arr[i] += "HELLO";
			std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
		}	
	}
}
