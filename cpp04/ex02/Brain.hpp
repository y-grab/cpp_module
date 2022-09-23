#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const Brain &);
		Brain(const std::string);
		Brain& operator=(const Brain &);
		~Brain();

		void	printIdeas() const;

	private:
		std::string	ideas[100];
};

#endif