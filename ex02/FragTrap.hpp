#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap: public ClapTrap
{
	private:
		int hitPoints;
		int energyPoints;
		int attackPoints;
	public:
		void highFivesGuys(void);
		FragTrap();
		~FragTrap();
};

#endif