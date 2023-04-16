#include "PmergeMe.hpp"

int main(int ac, char **av)
{

	if (ac > 2 && parse(ac, av))
	{
		std::vector<int> my_vec;
		std::list<int>	my_lst;
		//push_back
		AddToContainer(my_vec, av, ac);
		AddToContainer(my_lst, av, ac);
		//display all
		std::cout<<"before : ";
		PrintContainer(my_vec);
		//sort
		sort(my_vec, 0, ac - 2);

		//display after
		std::cout<<"After : ";
		PrintContainer(my_vec);

	}
	else
		std::cout<<"Error"<<std::endl;


}