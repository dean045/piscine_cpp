/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:46:21 by brhajji-          #+#    #+#             */
/*   Updated: 2022/10/24 20:23:18 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include<iostream>
#include "HumanA.hpp"

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string str);
		Weapon();
		~Weapon();
		const std::string* getType();
		void setType(std::string str);
};

#endif