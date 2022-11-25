/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:01:28 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/11 10:24:59 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->type = std::string("Cat");
}

Cat::~Cat()
{
	std::cout << "Cat Default Destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat& src)
{
	if (this != &src)
    {
        this->type = src.type;
    }
    std:: cout << "Cat Assigantion overload Constructor"<< std::endl;
    return (*this);
}

Cat::Cat(const Cat& src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

void Cat::makeSound() const
{
	std::cout << "Miaoow" << std::endl;
}