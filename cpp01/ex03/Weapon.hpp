/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:46:21 by brhajji-          #+#    #+#             */
/*   Updated: 2022/10/25 12:49:07 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include<iostream>
class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string str);
		Weapon();
		~Weapon();
		const std::string& getType();
		void setType(std::string str);
};

#include "HumanA.hpp"
#include "HumanB.hpp"


#endif