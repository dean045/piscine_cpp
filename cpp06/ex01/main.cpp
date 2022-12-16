/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:24:09 by brhajji-          #+#    #+#             */
/*   Updated: 2022/12/15 21:26:32 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Serial.hpp"

int main()
{
	Data *test = new Data;
	Data *test2;
	uintptr_t ptrtest;

	test->ptr = 12;
	
	std::cout<<"value of test = "<< test->ptr <<std::endl;
	ptrtest = serialize(test);
	// std::cout<<"Adress of test = "<< test<<std::endl;
	// std::cout<<"Adress of serialized uintptr = "<< &ptrtest <<std::endl;
	// std::cout<<"value of serialized uintptr = "<< ptrtest <<std::endl;
	test2 = deserialize(ptrtest);
	std::cout<<"value of test = "<< test2->ptr <<std::endl;
	// std::cout<<"Adress of unserialized test3 = "<< test3 <<std::endl;
	// std::cout<<"value of unserialized test3 = "<< *test3 <<std::endl;
	delete test;
	// delete test2;
	return (0);
}