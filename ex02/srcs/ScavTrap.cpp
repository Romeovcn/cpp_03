#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "🦾 " << name << " upgraded to powerfull ScavTrap." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &to_cpy) : ClapTrap(to_cpy)
{
	std::cout << "🦾 " << to_cpy._name << " upgraded to powerfull ScavTrap." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "🦾 Powerfull ScavTrap destroyed." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &to_cpy)
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

void ScavTrap::attack(const std::string& target)
{
	if (check_death_and_energy(this->_name, this->_life_points, this->_energy_points))
		return;
	this->_energy_points--;
	std::cout << "⚔️  " << this->_name << " attacks " << target 
	<< ", causing " << this->_attack_dmg << " points of damage ! 🔋 " 
	<< this->_energy_points << " energy left."<< std::endl;
}

void ScavTrap::guardGate()
{
	if (check_death_and_energy(this->_name, this->_life_points, 1))
		return;
	std::cout << "🛡️  " << this->_name << " goes into Gate Keeper mode !" << std::endl;
}