#include "FragTrap.hpp"

int main()
{
	FragTrap nbr1("Romeo");
	FragTrap nbr2("Pierre");
	FragTrap nbr3(nbr2);
	std::cout << "-------------------------------------------------------------------------" 
	<< std::endl;
	nbr3.attack("Pierre");
	nbr3.highFivesGuys();
	nbr3.takeDamage(100);
	nbr3.highFivesGuys();
	std::cout << "-------------------------------------------------------------------------" 
	<< std::endl;
}