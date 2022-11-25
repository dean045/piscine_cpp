/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:23:14 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/25 18:05:10 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	Bureaucrat testok = Bureaucrat("testok", 5);
	std::cout<<testok<<std::endl;
	try
	{
		//testok.incr();
		//Form fok = Form("fok", 2, 3);
		Form *nok = new ShrubberyCreationForm("testSh");
		Form *rok = new RobotomyRequestForm("testRo");
		PresidentialPardonForm *pok = new PresidentialPardonForm("testPr");
		Form *popo = new PresidentialPardonForm(*pok);
		
		//std::cout<<nok<<std::endl;
		testok.signForm(nok);
		testok.executeForm(*nok);
		testok.executeForm(*rok);
		testok.signForm(rok);
		testok.executeForm(*rok);
		testok.signForm(pok);
		testok.executeForm(*pok);
		testok.executeForm(*popo);
		testok.signForm(popo);
		testok.executeForm(*popo);
		//fok.beSigned(testok);
		///std::cout<<nok<<std::endl;
		//testok.signForm(nok);
		//Bureaucrat testko = Bureaucrat("testKO", 151);
		delete nok;
		delete rok;
		delete pok;
		delete popo;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}