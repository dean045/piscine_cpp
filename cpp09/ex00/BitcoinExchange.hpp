#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <string>
#include <iostream>
#include <map>
#include <cstdlib>
#include <stdlib.h>
#include <algorithm>
#include <fstream>
#include "Date.hpp"

class BitcoinExchange
{
	private:
		std::map<Date, float> data;
	public:
		BitcoinExchange();
		BitcoinExchange(std::string file);
		~BitcoinExchange();
		void	insert_data(std::string d);
		void	run(std::string infile);
		float	get_value(Date d, float val);
		class FileException: public std::exception
		{
			public: const char* what(void) const throw();
		};
		class DataBaseException: public std::exception
		{
			public: const char* what(void) const throw();
		};
		class InputException: public std::exception
		{
			public: const char* what(void) const throw();
		};
};
void	date_split(std::string src, std::string *date);




#endif