#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	public:
		Harl(std::string str);
		void	complain(std::string filter);
		~Harl();

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		static const std::string	_levels[4];
		int							_filter;
};

#endif