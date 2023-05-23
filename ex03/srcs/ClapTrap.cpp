#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_life_points = 10;
	this->_energy_points = 10;
	this->_attack_dmg = 0;

	std::cout << "🤖 Default ClapTrap created ! ❤️  10 life points and 🔋 10 energy points." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	this->_life_points = 10;
	this->_energy_points = 10;
	this->_attack_dmg = 0;

	std::cout << "🤖 ClapTrap " << name << " created ! ❤️  10 life points and 🔋 10 energy points." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &to_cpy)
{
	this->_name = to_cpy._name;
	this->_attack_dmg = to_cpy._attack_dmg;
	this->_life_points = to_cpy._life_points;
	this->_energy_points = to_cpy._energy_points;

	std::cout << "🤖 ClapTrap " << this->_name << " created ! ❤️  " 
	<<  this->_life_points << " life points and 🔋 " << this->_energy_points 
	<< " energy points." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "🤖 ClapTrap " << this->_name << " destroyed !" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &to_cpy)
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

void ClapTrap::attack(const std::string& target)
{
	if (check_death_and_energy(this->_name, this->_life_points, this->_energy_points))
		return;
	this->_energy_points--;
	std::cout << "⚔️  " << this->_name << " attacks " << target 
	<< ", causing " << this->_attack_dmg << " points of damage ! 🔋 " 
	<< this->_energy_points << " energy left."<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_life_points < 1)
	{
		std::cout << "💥 " << this->_name << " can't take damage because he is already dead." << std::endl;
		return;
	}
	this->_life_points -= amount;
	std::cout << "💥 " << this->_name << " takes " << amount << " damage !";
	if (this->_life_points > 0)
		std::cout << " ❤️  " << this->_life_points << " life points left !" << std::endl;
	else
		std::cout << " and died 💀..." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (check_death_and_energy(this->_name, this->_life_points, this->_energy_points))
		return;
	this->_energy_points--;
	this->_life_points += amount;
	std::cout << "🔧 " << this->_name << " repaired himself " 
	<< amount << " points. 🔋 " << this->_energy_points << " energy left." << std::endl;
}