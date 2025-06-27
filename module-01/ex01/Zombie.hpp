#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string name);
		Zombie();
		void announce() const;
		void setName(std::string name);
		~Zombie();
};

Zombie *zombieHorde(int N, std::string name);

#endif