#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Jerry");
    ClapTrap b("Frank");

    a.attack("Frank");
    // a.attack(b.getName());
    b.takeDamage(12);
    b.beRepaired(5);
}