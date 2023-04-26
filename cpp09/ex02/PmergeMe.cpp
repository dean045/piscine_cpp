#include "PmergeMe.hpp"

int	parse(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
	{
		if (std::strlen(av[i]) == 0)
			return 0;
		for (size_t j = 0; j < std::strlen(av[i]); j++)
			if (std::isdigit(av[i][j]) == 0)
				return 0;
	}
	return 1;
}