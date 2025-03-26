#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap def constructor " << name << std::endl;
}

ScavTrap::ScavTrap (std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap def constructor " << name << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackPoints = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor " << copy.name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	if (this != &copy)
		ClapTrap::operator=(copy);
	std::cout << "ScavTrap copy assingment operator " << name << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor " << name << std::endl;
}
