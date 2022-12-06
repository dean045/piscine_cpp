/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:18:49 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/29 14:01:34 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<stdio.h>
#include<cstdlib>

void handleChar(const std::string num)
{
	const char *s = num.c_str();
	printf("%i\n", (int)*s);
	if (*s < 127 && *s >= 32)
		std::cout<<"char : "<<static_cast<char>(*s)<<std::endl;
	else if (*s < 127)
		std::cout<<"char :  Non displayable"<<std::endl;
	else
		std::cout<<"char : Impossible"<< std::endl;
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string num(av[1]);
		handleChar(num);
		double x = std::atof(num.c_str());

		if (x > 2147483647 || x < -2147483648)
			std::cout<<"int =  Impossible"<<std::endl;
		else
			std::cout<<"int = "<<static_cast<int>(x)<<std::endl;
		std::cout<<"float = "<<static_cast<float>(x)<<std::endl;
	}
	else
		std::cerr<<"Invalid number of arguments."<<std::endl;
	return (0);
}