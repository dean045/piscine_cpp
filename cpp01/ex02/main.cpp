/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:09:44 by brhajji-          #+#    #+#             */
/*   Updated: 2022/10/24 18:26:07 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main()
{
	std::string	var = "HI THIS IS BRAIN";
	std::string *stringPTR = &var;
	std::string& stringREF(var);

	std::cout<<"str adress : "<<&var<<std::endl;
	std::cout<<"str adress : "<<stringPTR<<std::endl;
	std::cout<<"str adress : "<<&stringREF<<std::endl;

	std::cout<<"str value : "<<var<<std::endl;
	std::cout<<"str value : "<<*stringPTR<<std::endl;
	std::cout<<"str value : "<<stringREF<<std::endl;

}