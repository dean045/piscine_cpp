/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:46:18 by brhajji-          #+#    #+#             */
/*   Updated: 2022/10/25 12:51:23 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType()
{
	return ((const std::string&)(this->type));
}

void Weapon::setType(std::string str)
{
	this->type = str;
}

Weapon::Weapon()
{
}

Weapon::Weapon(std::string str) : type(str)
{
}

Weapon::~Weapon()
{
}