/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:09:47 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/18 11:42:15 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat Default constructor called" << std::endl;
	this->type = std::string("WrongCat");
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Default Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat& src)
{
	if (this != &src)
    {
        this->type = src.type;
    }
    std:: cout << "WrongCat Assigantion overload Constructor"<< std::endl;
    return (*this);
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongMiaoow" << std::endl;
}