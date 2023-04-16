#include "PmergeMe.hpp"

int	parse(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
		for (size_t j = 0; j < std::strlen(av[i]); j++)
			if (std::isdigit(av[i][j]) == 0)
				return 0;
	return 1;
}