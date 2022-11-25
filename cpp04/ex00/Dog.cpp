/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:01:11 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/10 14:08:42 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->type = std::string("Dog");
}

Dog::~Dog()
{
	std::cout << "Dog Default Destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog& src)
{
	if (this != &src)
    {
        this->type = src.type;
    }
    std:: cout << "Dog Assigantion overload Constructor"<< std::endl;
    return (*this);
}

Dog::Dog(const Dog& src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

void Dog::makeSound() const
{
	std::cout << "Woaaaaf" << std::endl;
}