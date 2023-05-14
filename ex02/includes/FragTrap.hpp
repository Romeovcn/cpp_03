#include "ClapTrap.hpp"

#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &to_cpy);
		~FragTrap();
		FragTrap &operator=(const FragTrap &obj);

		void attack(const std::string& target);
		void highFivesGuys();
};

#endif