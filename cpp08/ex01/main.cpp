#include "Span.hpp"

int main(void)
{
	{
		try {
			std::vector<int> vect;
			Span span(1000);
	
			for (int i = 0; i < 1000; i++) {
				vect.push_back(i);
			}
			span.addNumber(vect.begin(), vect.end());
			std::cout << "shortest span: " << span.shortestSpan() << std::endl;
			std::cout << "longest span: " << span.longestSpan() << std::endl;
			//trying to add number to full list
			span.addNumber(1);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	}
	std::cout << "------------------" << std::endl;
	{
		Span span(1);
		span.addNumber(1);
		try {
			std::cout << "shortest span: " << span.shortestSpan() << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << "longest span: " << span.longestSpan() << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "------------------" << std::endl;
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
}
