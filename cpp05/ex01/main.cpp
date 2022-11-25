/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:23:14 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/25 18:01:03 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	Bureaucrat testok = Bureaucrat("testok", 1);
	std::cout<<testok<<std::endl;
	try
	{
		//testok.incr();
		Form fok = Form("fok", 2, 3);
		std::cout<<fok<<std::endl;
		testok.signForm(&fok);
		testok.signForm(&fok);
		//Bureaucrat testko = Bureaucrat("testKO", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}