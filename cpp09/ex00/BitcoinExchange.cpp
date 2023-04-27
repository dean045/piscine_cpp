#include "BitcoinExchange.hpp"

void	date_split(std::string src, std::string	*date)
{
	std::string delimiter = "-";

	size_t pos = 0;
	int i = -1;
	while ((pos = src.find(delimiter)) != std::string::npos) 
	{
		date[++i] = src.substr(0, pos);
		src.erase(0, pos + 1);
	}
	date[++i] = src;
}

const char* BitcoinExchange::FileException::what(void) const throw() 
{
  return ("could not open file.");
}

const char* BitcoinExchange::DataBaseException::what(void) const throw() 
{
  return ("could not open database file.");
}

const char* BitcoinExchange::InputException::what(void) const throw() 
{
  return ("Bad input");
}

void BitcoinExchange::insert_data(std::string d)
{
	std::string delimiter = ",";

	size_t pos = 0;
	if ((pos = d.find(delimiter)) != std::string::npos) 
	{	
		Date tmp(std::string(d.substr(0, pos)));
		d.erase(0, pos + 1);
		float value_tmp = 0;
		value_tmp = strtof(d.c_str(), NULL);
		// std::cout<<"val=>"<<value_tmp<<std::endl;
		// if (value_tmp <= 0 || value_tmp >= 1000)
		// 	throw BitcoinExchange::InputException();
		data.insert(std::pair<Date, float>(tmp, value_tmp));
		//this->data[tmp] = value_tmp;
		// std::cout<<"val 1 = "<<data.find(tmp)->second<<std::endl;
		return ;
	}
	throw BitcoinExchange::InputException();
}

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(std::string file)
{
	std::ifstream infile(file.c_str());
	if (!infile.is_open())
		throw BitcoinExchange::DataBaseException();
	std::string buff;
	std::getline(infile, buff);
	if (infile.eof())
		throw BitcoinExchange::DataBaseException();
	while (!infile.eof())
	{
		std::getline(infile, buff);
		if (buff.size())
		{
			try
			{
				insert_data(buff);
			}
			catch(const std::exception& e)
			{
				std::cerr<<"Error : "<<e.what()<<'\n';
			}
		}
	}
}

float	BitcoinExchange::get_value(Date d, float val)
{
	std::map<Date, float>::iterator one = data.find(d);
	if (one != data.end())
		return (one->second * val);
	else
	{
		Date tmp = data.begin()->first;
		for (std::map<Date, float>::iterator it = data.begin(); it != data.end(); it++)
		{
			if (it->first <= d && it->first >= tmp)
				tmp = it->first;
		}
		return ((data.find(tmp)->second) * val);
	}
}

void	BitcoinExchange::run(std::string file)
{
	std::ifstream infile(file.c_str());
	if (!infile.is_open())
		throw BitcoinExchange::FileException();
	std::string buff;
	std::getline(infile, buff);
	if (infile.eof())
		throw BitcoinExchange::FileException();
	while (!infile.eof())
	{
		Date tmp("1-1-1");
		std::getline(infile, buff);
		if (buff.size())
		{
			std::string delimiter = " | ";
			size_t pos = 0;
			if ((pos = buff.find(delimiter)) != std::string::npos) 
			{	
				try
				{
					// std::cout<<"d=>"<<std::string(buff.substr(0, pos))<<std::endl;
					tmp = Date(std::string(buff.substr(0, pos)));
					buff.erase(0, pos + 3);
					float value_tmp = -1;
					value_tmp = strtof(buff.c_str(), NULL);
					if (value_tmp <= 0)
						std::cout<<"Error: not a positive number."<<std::endl;
					else if (value_tmp >= 1000)
						std::cout<<"Error: too large number."<<std::endl;
					else
						std::cout<<tmp<<" => "<<value_tmp<<" = "<<get_value(tmp, value_tmp)<<std::endl;
				}
				catch(const std::exception& e)
				{
					std::cerr <<"Error: "<< e.what() << '\n';
				}
			}
			else
			{
				std::cout<<"Error: Bad input."<<std::endl;
			}
		}
	}
}

BitcoinExchange::~BitcoinExchange()
{
}