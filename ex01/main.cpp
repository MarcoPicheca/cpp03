#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap a("Jerry");
	ClapTrap b("Frank");
	ScavTrap s("kim");
	s.attack("Jhonny");
	ScavTrap l("jhonny");
	s = l;
	ScavTrap c(l);
	s.attack("Jhonny");
	c.beRepaired(10);
	l.takeDamage(89);
	a.attack("Frank");
	b.takeDamage(12);
	b.beRepaired(5);
}