#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	// (void) (ac);
	// (void) (av);
	if (ac == 2)
	{
		try
		{
			//Date test("2011-01-03");
			BitcoinExchange test("data.csv");
			test.run(av[1]);
			//test.insert_data("2011-01-03 | 3");
		}
		catch(const std::exception& e)
		{
			std::cerr<<"Error : "<<e.what()<<'\n';
		}
	}
	else
		std::cout<<"Error: could not open file."<<'\n';
}