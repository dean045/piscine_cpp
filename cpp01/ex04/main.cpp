/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:09:25 by brhajji-          #+#    #+#             */
/*   Updated: 2022/10/25 15:48:17 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static void replace(std::string s1, std::string s2, std::string& fName)
{
	std::ifstream	fd(fName.c_str());
	if (fd.fail())
	{
		std::cout<<"File error."<<std::endl;
		return ;
	}
	char	c;
	int 	pos;
	std::string buffer;
	while (fd.get(c))
		buffer += c;
	if (!fd.eof())
	{
		std::cout<<"File error."<<std::endl;
		return ;
	}
	while (1)
	{
		pos = buffer.find(s1);
		if (pos != (int) std::string::npos)
		{
			buffer.erase(pos, s1.length());
			buffer.insert(pos, s2);
		}
		else
			break ;
	}
	fName.append(".replace");
	std::ofstream new_fd(fName.c_str());
	if (new_fd.fail())
		std::cout<<"Can not create the new file."<<std::endl;
	new_fd << buffer << std::flush;
}

int main (int ac, char **av)
{
	if (ac == 4)
	{
		if (!(av[3][0]) || !(av[2][0]))
		{
			std::cout<<"Wrong input"<<std::endl;
			return (2);
		}
		std::string fName = av[1];
		replace(av[2], av[3], fName);
	}
	else
		return (1);
	return (0);
}