#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		int hitPoints;
		int energyPoints;
		int attackPoints;
	public:
		void guardGate();
		ScavTrap();
		~ScavTrap();
};

#endif