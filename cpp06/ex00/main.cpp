/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:18:49 by brhajji-          #+#    #+#             */
/*   Updated: 2022/12/13 16:05:35 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout<<"Error: invalid number of argument."<< std::endl;
		return (0);
	}
	else
	{
		std::string	value(av[1]);
		Utils	to_utils(value);
		to_utils.findType();
		to_utils.convert();
	}
	return (0);
}