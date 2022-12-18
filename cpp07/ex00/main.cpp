/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 21:15:55 by brhajji-          #+#    #+#             */
/*   Updated: 2022/12/16 22:02:26 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"whatever.hpp"

int main()
{
	// int a = 42;
	// int b = 1337;
	// float s = 4.42;
	// float t = 6.67;
	// std::string mr = "BOOBA";
	// std::string ms = "KAARIS";
	// std::cout << "Before swap a: " << a << " b: " << b << std::endl;
	// swap(a, b);
	// std::cout << "After swap a: " << a << " b: " << b << std::endl;
	// std::cout << "Min int =>"<<min(a, b)<<std::endl;
	// std::cout << "Max int =>"<<max(a, b)<<std::endl;
	// std::cout << "Before swap s: " << s << " t: " << t << std::endl;
	// swap(s, t);
	// std::cout << "Min float =>"<<min(s, t)<<std::endl;
	// std::cout << "Max float =>"<<max(s, t)<<std::endl;

	// std::cout << "After swap s: " << s << " t: " << t << std::endl;

	// std::cout << "Before swap mr: " << mr << " ms: " << ms << std::endl;
	// swap(mr, ms);
	// std::cout << "After swap mr: " << mr << " ms: " << ms << std::endl;
	// std::cout << "Min string =>"<<min(mr, ms)<<std::endl;
	// std::cout << "Max string =>"<<max(mr, ms)<<std::endl;
	// return 0;
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	return 0;
}