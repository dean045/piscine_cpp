/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:39:45 by brhajji-          #+#    #+#             */
/*   Updated: 2022/10/24 14:52:38 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

void	Zombie::announce()
{
	std::cout<<this->name<<" :  BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::Zombie(std::string	name) : name(name)
{
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::clog<<this->name<<" est deeaaad."<<std::endl;
}

void Zombie::setZombieName(std::string	name)
{
	this->name = name;
}