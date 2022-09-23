/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujicama <ujicama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:29:05 by ujicama           #+#    #+#             */
/*   Updated: 2022/08/07 16:24:39 by ujicama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Base
{
	public:
		virtual ~Base() {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base* generate(void)
{
	srand(time(NULL));
	Base *ret;
	int id = rand() % 3;
	switch (id)
	{
		case 0:
			std::cout << "A generated" << std::endl;
			ret = new A();
			break;
		case 1:
			std::cout << "B generated" << std::endl;
			ret = new B();
			break;
		case 2:
			std::cout << "C generated" << std::endl;
			ret = new C();
			break;
	}
	return ret;
}

void identify_ptr(Base* p)
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);

	if (a && b == NULL && c == NULL)
		std::cout << "[ptr] the Type is A" << std::endl;
	else if (b && a == NULL && c == NULL)
		std::cout << "[ptr] the Type is B" << std::endl;
	else if (c && a == NULL && b == NULL)
		std::cout << "[ptr] the Type is C" << std::endl;
}

void identify_ref(Base& p)
{
	try
	{
		(void) dynamic_cast<A&>(p);
		std::cout << "[ref] the Type is A" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		(void) dynamic_cast<B&>(p);
		std::cout << "[ref] the Type is B" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		(void) dynamic_cast<C&>(p);
		std::cout << "[ref] the Type is C" << std::endl;
	}
	catch (std::exception &e) {}
}

int main(void)
{
	Base *ptr;

	ptr = generate();
	
	identify_ptr(ptr);
	identify_ref(*ptr);

	delete ptr;
	return 0;
}