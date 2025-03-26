#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "default constructor ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string giveName) : name(giveName)
{
	this->name = giveName;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackPoints = 0;
	std::cout << "ClapTrap Constructor called\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called\n";
}

void ClapTrap::attack(const std::string& target)
{
	int attackDamage = 1;
	if (this->energyPoints > 0)
	{
		this->energyPoints--;
		std::cout << "ClapTrap " << this->name << " attack " << target << " causing " << attackDamage << " points of damage" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;
	std::cout << this->name << " got hit losing " << amount << " hitPoints" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "ClapTrap copy constructor called\n";
	name = copy.name;
	hitPoints = copy.hitPoints;
	energyPoints = copy.energyPoints;
	attackPoints = copy.attackPoints;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	std::cout << "ClapTrap copy assingment operator called\n";
	if (this != &copy)
	{
		name = copy.name;
		hitPoints = copy.hitPoints;
		energyPoints = copy.energyPoints;
		attackPoints = copy.attackPoints;
	}
	return *this;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0)
	{
		this->hitPoints += amount;
		this->energyPoints--;
		std::cout << this->name << " repair itself gaining " << amount << " hitPoints" << std::endl;
	}
}

