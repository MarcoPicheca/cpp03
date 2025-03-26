#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		int hitPoints;
		int energyPoints;
		int attackPoints;
	public:
		ClapTrap(std::string giveName = "Default");
		ClapTrap(const ClapTrap& clapTrap);
		ClapTrap& operator=(const ClapTrap& clapTrap);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif