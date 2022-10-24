/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:46:18 by brhajji-          #+#    #+#             */
/*   Updated: 2022/10/24 20:23:24 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

const std::string* Weapon::getType()
{
	return (&(this->type));
}

void Weapon::setType(std::string str)
{
	this->type = str;
}

Weapon::Weapon(std::string str)
{
	this->type = str;
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}