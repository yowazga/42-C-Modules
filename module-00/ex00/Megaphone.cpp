#include <iostream>

void start(char *str)
{
	int i = -1;
	while (str[++i])
		std::cout << static_cast<char>(std::toupper(str[i]));
}

int main(int ac, char **av)
{
	int i = 0;
	if (ac <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while(av[++i])
		start(av[i]);
	std::cout << std::endl;
}