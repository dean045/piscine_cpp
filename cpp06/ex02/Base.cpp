/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 23:58:46 by brhajji-          #+#    #+#             */
/*   Updated: 2022/12/16 19:40:01 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{	
}

Base * generate(void)
{
	srand ( time(NULL) );
	int x = rand() % 3;
	if (x % 3 == 1)
		return (new A());
	else if (x % 3 == 2)
		return (new B());
	else
		return (new C());
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout<<"A"<<std::endl;
	if (dynamic_cast<B*>(p))
		std::cout<<"B"<<std::endl;
	if (dynamic_cast<C*>(p))
		std::cout<<"C"<<std::endl;
}

void identify(Base& p)
{

	Base* tmp = (dynamic_cast<A*>(&p));
	if (tmp)
		std::cout<<"A"<<std::endl;
	else
	{
		tmp = (dynamic_cast<B*>(&p));
		if (tmp)
			std::cout<<"B"<<std::endl;
		else
		{
			Base* tmp = (dynamic_cast<C*>(&p));
			if (tmp)
				std::cout<<"C"<<std::endl;
			else
				std::cout<<"WRONG CLASS"<<std::endl;	
		}
	
	}
}