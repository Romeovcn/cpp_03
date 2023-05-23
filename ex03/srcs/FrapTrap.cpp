#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "🦾 " << " Default FragTrap." << std::endl;
	this->_attack_dmg = 30;
	this->_life_points = 100;
	this->_energy_points = 100;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ici🦾 " << name << " upgraded to even more powerfull FragTrap." << std::endl;
	this->_attack_dmg = 30;
	this->_life_points = 100;
	this->_energy_points = 100;
}

FragTrap::FragTrap(const FragTrap &to_cpy) : ClapTrap(to_cpy)
{
	std::cout << "🦾 " << to_cpy._name << " upgraded to even more powerfull FragTrap." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "🦾 Powerfull FragTrap destroyed." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &to_cpy)
{
	this->_name = to_cpy._name;
	this->_attack_dmg = to_cpy._attack_dmg;
	this->_life_points = to_cpy._life_points;
	this->_energy_points = to_cpy._energy_points;
	return *this;
}

// ------------------------ Canonical constructor/destructor ------------------------ //

static int check_death_and_energy(std::string name, int life_points, int energy_points)
{
	if (life_points < 1)
	{
		std::cout << "💀 " << name << " can't do any action because he is dead..." << std::endl;
		return 1;
	}
	if (energy_points < 1)
	{
		std::cout << "🪫 " << name << " can't do any action because he has no energy..." << std::endl;
		return 1;
	}
	return 0;
}

void FragTrap::attack(const std::string& target)
{
	if (check_death_and_energy(this->_name, this->_life_points, this->_energy_points))
		return;
	this->_energy_points--;
	std::cout << "⚔️  " << this->_name << " attacks " << target 
	<< ", causing " << this->_attack_dmg << " points of damage ! 🔋 " 
	<< this->_energy_points << " energy left."<< std::endl;
}

void FragTrap::highFivesGuys()
{
	if (check_death_and_energy(this->_name, this->_life_points, 1))
		return;
	std::cout << "✋ " << this->_name << " ask you for a high five !" << std::endl;
}