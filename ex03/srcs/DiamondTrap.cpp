#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "💎 Default DiamondTrap created." << std::endl;
	this->_life_points = FragTrap::_energy_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_dmg = FragTrap::_energy_points;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name), ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "💎 " << name << " DiamondTrap created." << std::endl;
}

//DiamondTrap::DiamondTrap(const DiamondTrap &to_cpy) : _name(to_cpy.name), ScavTrap(to_cpy.name), FragTrap(to_cpy.name)
//{
////	std::cout << "💎 " << name << " DiamondTrap created." << std::endl;
//}

DiamondTrap::~DiamondTrap()
{
	std::cout << "💎 " << _name << " DiamondTrap destroyed." << std::endl;
}

//DiamondTrap &DiamondTrap::operator=(const DiamondTrap &to_cpy)
//{
//	return *this;
//}

// ------------------------ Canonical constructor/destructor ------------------------ //

void DiamondTrap::attack(const std::string& target)
{
	std::cout << "test\n";
	ScavTrap::attack;
}