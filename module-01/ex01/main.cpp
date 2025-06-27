#include "Zombie.hpp"

int main()
{
	int numZombie = 5;
	std::string name = "zombie";
	Zombie* zombie;
	zombie = zombieHorde(numZombie, name);
	if (zombie)
	{
		for(int i = 0; i < numZombie; i++)
			zombie[i].announce();
		delete[] zombie;
	}
	else
		std::cout << "Failed to create zombie horde." << std::endl;
}