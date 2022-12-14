/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:46:08 by brhajji-          #+#    #+#             */
/*   Updated: 2022/10/25 15:01:05 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void) : name("random")
{
}

HumanB::HumanB(std::string name) : name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	std::cout << name << " attacks with his " << this->sword->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &object)
{
	sword = &object;
}