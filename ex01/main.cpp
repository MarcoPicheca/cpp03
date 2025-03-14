#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("Jerry");
    ClapTrap b("Frank");
    ScavTrap obj;

    a.attack("Frank");
    // a.attack(b.getName());
    b.takeDamage(12);
    b.beRepaired(5);
    obj.guardGate();
}