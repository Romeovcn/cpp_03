#include "ScavTrap.hpp"

int main()
{
	ScavTrap nbr1("Romeo");
	nbr1.attack("Pierre");
	nbr1.guardGate();
	nbr1.takeDamage(100);
	nbr1.guardGate();
}