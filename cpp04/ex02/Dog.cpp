/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:01:11 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/22 14:37:35 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->type = std::string("Dog");
	this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog Default Destructor called" << std::endl;
	delete this->brain;
}

Dog &Dog::operator=(const Dog& src)
{
	if (this != &src)
    {
        this->type = src.type;
		this->brain = new Brain(*(src.brain));
    }
    std::cout << "Dog Assigantion overload Constructor"<< std::endl;
	std::cout << "src type = "<<&(src.type)<<std::endl;
	std::cout << "this type = "<<&(this->type)<<std::endl;
	std::cout << "src brain = "<<&(src.brain)<<std::endl;
	std::cout << "this brain = "<<&(this->brain)<<std::endl;
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