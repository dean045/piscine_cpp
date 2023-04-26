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

		clock_t	start = clock();
		clock_t	end = clock();
		mysort(my_vec);
		end = clock();
		double vec_time = (end - start) / (double)(CLOCKS_PER_SEC / 1000);
		mysort(my_lst);

		start = clock();
		mysort(my_vec);
		end = clock();
		double deq_time = (end - start) / (double)(CLOCKS_PER_SEC / 1000);

		//display after
		std::cout<<"After : ";
		PrintContainer(my_vec);
		std::cout<<"Time to process a range of "<<ac - 1<<" elements with std::vector : "<<vec_time<<" us\n";
		PrintContainer(my_lst);
		std::cout<<"Time to process a range of "<<ac - 1<<" elements with std::deque : "<<deq_time<<" us\n";

	}
	else
		std::cout<<"Error"<<std::endl;


}