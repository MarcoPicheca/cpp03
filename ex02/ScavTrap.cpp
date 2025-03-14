#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackPoints = 20;
    std::cout << "ScavTrap default constructor\n";
};

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor\n";
};

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}