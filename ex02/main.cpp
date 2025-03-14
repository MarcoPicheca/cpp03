#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap a("Jerry");
    ClapTrap b("Frank");
    ScavTrap obj;
    FragTrap fObj;

    a.attack("Frank");
    // a.attack(b.getName());
    b.takeDamage(12);
    b.beRepaired(5);
    obj.guardGate();
    fObj.highFivesGuys();
}