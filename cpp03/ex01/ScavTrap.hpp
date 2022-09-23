#ifndef SCAVTRAP_Hpp
# define SCAVTRAP_hpp

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap();
		ScavTrap & operator=(const ScavTrap &src);

		void guardGate();
		void attack();
};

#endif