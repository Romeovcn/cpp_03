#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#ifndef DIAMOND_TRAP_H
# define DIAMOND_TRAP_H

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		//DiamondTrap(const DiamondTrap &to_cpy);
		~DiamondTrap();
		//DiamondTrap &operator=(const DiamondTrap &obj);

		void attack(const std::string& target);
};

#endif