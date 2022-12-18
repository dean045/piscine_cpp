/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 00:59:38 by brhajji-          #+#    #+#             */
/*   Updated: 2022/12/18 14:37:48 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> tab(10);
	tab[0] = 1;
	tab[1] = 2; 
	Array<int> tab2;
	std::cout<<"size tab = "<<tab.size()<<std::endl;
	std::cout<<"size tab[0] = "<<tab[0]<<std::endl;
	std::cout<<"size tab2 = "<<tab2.size()<<std::endl;
	tab2 = tab;
	std::cout<<"After tab2 = tab"<<std::endl;
	std::cout<<"size tab = "<<tab.size()<<std::endl;
	std::cout<<"size tab2 = "<<tab2.size()<<std::endl;
}