#include "PmergeMe.hpp"

int main(int ac, char **av)
{

	if (ac > 2 && parse(ac, av))
	{

		std::vector<int> my_vec;
		std::deque<int>	my_lst;
		//push_back
		AddToContainer(my_vec, av, ac);
		AddToContainer(my_lst, av, ac);
		//display all
		std::cout<<"before : ";
		PrintContainer(my_vec);
		//sort
		clock_t	vec_start = clock();

		std::cout<<"start s = "<<vec_start.tv_sec<<" , us = "<<vec_start.tv_usec<<"\n";
		sort(my_vec, 0, ac - 2);
		clock_t	vec_end = clock();
		std::cout<<"us = "<<(double)(vec_end - vec_start) / (double)(CLOCKS_PER_SEC / 1000);

		clock_t	deq_start = clock();
		sort(my_lst, 0, ac - 2);
		clock_t	deq_end = clock();

		//display after
		std::cout<<"After : ";
		PrintContainer(my_vec);
		std::cout<<"Time to process a range of "<<ac - 1<<" elements with std::vector : "<<" us\n";

	}
	else
		std::cout<<"Error"<<std::endl;


}