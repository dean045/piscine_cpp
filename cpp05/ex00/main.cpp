/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:23:14 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/25 17:51:03 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat testok = Bureaucrat("testok", 1);
	std::cout<<testok<<std::endl;
	try
	{
		testok.incr();
		//std::cout<<testok<<std::endl;
		Bureaucrat testko = Bureaucrat("testKO", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}