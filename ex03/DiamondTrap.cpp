#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << "Default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "Default Diamond constructor with name created: " << name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy)
{
	std::cout << "Default constructor with name created: " << name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
{
	if (this != &copy)
		ClapTrap::operator=(copy);
	std::cout << "copy assingment operator" << std::endl;
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "sono Diamond " << name << "sono Clap " << ClapTrap::name << std::endl;
}
