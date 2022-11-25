/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:03:03 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/10 14:10:25 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default constructor called" << std::endl;
	this->type = std::string("Animal");
}

Animal::~Animal()
{
	std::cout << "Animal Default Destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal& src)
{
	if (this != &src)
    {
        this->type = src.type;
    }
    std:: cout << "Animal Assigantion overload Constructor"<< std::endl;
    return (*this);
}

Animal::Animal(const Animal& src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

void Animal::makeSound() const
{
	std::cout << "ANIMAL SOUND" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::setType(const std::string& src)
{
	this->type = src;
}