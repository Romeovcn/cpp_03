#include <iostream>

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

class ClapTrap
{
	protected:
		std::string _name;
		int _life_points;
		int _energy_points;
		int _attack_dmg;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &to_cpy);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &obj);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif