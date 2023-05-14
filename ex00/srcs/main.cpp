#include "ClapTrap.hpp"

int main()
{
	ClapTrap nbr1("Romeo");
	nbr1.attack("Pierre");
	nbr1.takeDamage(1);
	nbr1.beRepaired(1);
	nbr1.attack("Pierre");
	nbr1.attack("Pierre");
	nbr1.attack("Pierre");
	nbr1.attack("Pierre");
	nbr1.attack("Pierre");
	nbr1.attack("Pierre");
	nbr1.attack("Pierre");
	nbr1.attack("Pierre");
	nbr1.attack("Pierre");
	nbr1.attack("Pierre");
	nbr1.attack("Pierre");
	nbr1.attack("Pierre");
	nbr1.attack("Pierre");
	nbr1.attack("Pierre");
	nbr1.attack("Pierre");
	nbr1.beRepaired(1);
	nbr1.takeDamage(10);
	nbr1.beRepaired(1);
	nbr1.attack("Pierre");
	nbr1.takeDamage(1);
	ClapTrap nbr2(nbr1);
}