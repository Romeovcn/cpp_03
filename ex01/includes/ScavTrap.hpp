#include "ClapTrap.hpp"

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &to_cpy);
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap &obj);

		void attack(const std::string& target);
		void guardGate();
};

#endif