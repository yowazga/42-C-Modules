#include "Zombie.hpp"

Zombie::Zombie() {}

void Zombie::setName(std::string name)
{
	this->name = name; 
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::announce() const
{
	std::cout << name << " BraiiiiiiinnnzzzZ" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " is destroyed." << std::endl;
}
