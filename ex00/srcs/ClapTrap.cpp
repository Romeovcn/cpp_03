#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "🤖 ClapTrap " << name << " created ! ❤️  10 life points and 🔋 10 energy points." << std::endl;
	this->_life_points = 10;
	this->_energy_points = 10;
	this->_attack_dmg = 0;
}

ClapTrap::ClapTrap(const ClapTrap &to_cpy)
{
	this->_name = to_cpy._name;
	this->_attack_dmg = to_cpy._attack_dmg;
	this->_life_points = to_cpy._life_points;
	this->_energy_points = to_cpy._energy_points;
	std::cout << "🤖 ClapTrap " << this->_name << " created ! ❤️  life points and 🔋 10 energy points." << std::endl;
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

void ClapTrap::attack(const std::string& target)
{
	if (this->_life_points < 1)
	{
		std::cout << "⚔️  ClapTrap " << this->_name << " can't attack because he is dead." << std::endl;
		return;
	}
	if (this->_energy_points < 1)
	{
		std::cout << "⚔️  ClapTrap " << this->_name << " has no energy. 🪫" << std::endl;
		return;
	}
	this->_energy_points--;
	std::cout << "⚔️  ClapTrap " << this->_name << " attacks " << target 
	<< ", causing " << this->_attack_dmg << " points of damage ! 🔋 " 
	<< this->_energy_points << " energy left."<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_life_points < 1)
	{
		std::cout << "💥 ClapTrap " << this->_name << " can't take damage because he is already dead." << std::endl;
		return;
	}
	this->_life_points -= amount;
	std::cout << "💥 ClapTrap " << this->_name << " takes " << amount << " damage !";
	if (this->_life_points > 0)
		std::cout << " ❤️  " << this->_life_points << " life points left !" << std::endl;
	else
		std::cout << " and died 💀..." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_life_points < 1)
	{
		std::cout << "🔧 ClapTrap " << this->_name << " can't repaire himself because he is dead." << std::endl;
		return;
	}
	if (this->_energy_points < 1)
	{
		std::cout << "🔧 ClapTrap " << this->_name << " has no energy. 🪫" << std::endl;
		return;
	}
	this->_energy_points--;
	this->_life_points += amount;
	std::cout << "🔧 ClapTrap " << this->_name << " repaired himself " << amount << " points. 🔋 " << this->_energy_points << " energy left." << std::endl;
}