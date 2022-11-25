/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:23:33 by brhajji-          #+#    #+#             */
/*   Updated: 2022/10/28 15:04:19 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"
# include <cstdio>
# include <unistd.h>
# include <math.h>

static int	ft_stoi(std::string str)
{
	int ret = 0;
	
	for (int i = 0; i < (int) str.length(); i++)
	{
		ret = (ret * 10) + (int)(str[i] - 48);
	}
	return (ret);
}

static int	is_dig(std::string str)
{
	for (int i = 0; i < (int) str.length(); i++)
	{
		if (str[i] > '9' || str[i] < '0')
			return (1);
	}
	return (0);
}

std::string gen_random(const int len) {
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    std::string tmp_s;
    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i) {
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    
    return tmp_s;
}

int main()
{
	Phonebook myPhone;
	std::string buff;
	std::string	tab[5] = {"First name", "Last name", "Nickname", "Phonenumber", "Darkest secret"};
	int i = -1;
	
	for (int x = 0; x < 8 ; x++)
		myPhone.Add(gen_random(2), gen_random(12), gen_random(6), gen_random(5), gen_random(5), (++i));
	
	while ((buff.compare("EXIT") != 0))
	{
		std::cout<<"Enter a command : ";
		std::getline(std::cin,buff);
		if (std::cin.eof())
			return 1;
		if (!(buff.compare("ADD")))
		{
			std::string	value[5];
			int j = 0;
			while (j < 5 && !value[j].length())
			{
				std::cout<<"Enter the "<<tab[j]<<" :";
				std::getline(std::cin, value[j]);
				if (std::cin.eof())
					return 1;
				if (j == 4 || value[j].length())
					j++;
			}
			myPhone.Add(value[0], value[1], value[2], value[3], value[4], (++i));
		}
		else if (!(buff.compare("SEARCH")))
		{
			myPhone.Print();
			if (i != - 1)
			{
				std::cout<<"Enter the index of the contact :";
				std::getline(std::cin,buff);
				if (std::cin.eof())
					return 1;
				while (is_dig(buff) || ft_stoi(buff) > i || ft_stoi(buff) < 0)
				{
					std::cout<<"Wrong input, try again :";
					std::getline(std::cin,buff);
					if (std::cin.eof())
						return 1;
				}
				myPhone.GetContact(ft_stoi(buff)).PrintOne();
			}
		}
	}
	return (0);
}