#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "constructor FragTrap defualt" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap (name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackPoints = 30;
	std::cout << "Defaul constructor FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	std::cout << "copy constructor FragTrap" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << " 'HIGH FIVE GUYS' says " << name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	if (this != &copy)
		ClapTrap::operator=(copy);
	std::cout << "copy assingment operator FragTrap" << std::endl;
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << "destructor FragTrap" << std::endl;
}