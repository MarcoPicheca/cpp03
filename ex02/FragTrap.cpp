#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackPoints = 30;
    std::cout << "FragTrap default constructor\n";
};

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor\n";
};

void FragTrap::highFivesGuys(void)
{
    std::cout << "Positive high-five request!\n";
}
