/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:16:21 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/11 10:16:38 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
	this->type = std::string("WrongAnimal");
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Default Destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& src)
{
	if (this != &src)
    {
        this->type = src.type;
    }
    std:: cout << "WrongAnimal Assigantion overload Constructor"<< std::endl;
    return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WRONG ANIMAL SOUND" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::setType(const std::string& src)
{
	this->type = src;
}