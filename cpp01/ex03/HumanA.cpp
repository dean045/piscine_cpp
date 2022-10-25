/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:46:02 by brhajji-          #+#    #+#             */
/*   Updated: 2022/10/25 15:03:29 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::setWeapon(Weapon &sword)
{
	sword = sword;
}

HumanA::HumanA(std::string name, Weapon &sword) : name(name), sword(&sword)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << name << " attacks with his " <<  this->sword->getType() << std::endl;
}
