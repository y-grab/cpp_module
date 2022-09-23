#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap();	
		DiamondTrap(std::string const& name);
		DiamondTrap(DiamondTrap const& src);
		~DiamondTrap();
		DiamondTrap& operator=(DiamondTrap const& src);

		void whoAmI();
		std::string const& getName(void) const;
		
	private:

		std::string	_name;
		
};

#endif