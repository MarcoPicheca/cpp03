#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap a("Jerry");
	DiamondTrap bigD("Josh");

	bigD.attack("Jerry");
	bigD.whoAmI();
	// ClapTrap b("Frank");
	// ScavTrap l("jhonny");
	// ScavTrap c(l);
	// FragTrap ezio("Alex");
	// FragTrap zio("Alex");
	// FragTrap eio("Alex");
	// FragTrap ezo("Alex");
	// c.beRepaired(10);
	// ezio.attack("jhonny");
	// l.takeDamage(89);
	// a.attack("Frank");
	// b.takeDamage(12);
	// b.beRepaired(5);
}