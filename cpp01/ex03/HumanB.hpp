/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:46:10 by brhajji-          #+#    #+#             */
/*   Updated: 2022/10/24 20:24:30 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "HumanA.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon		sword;
	public:
		HumanB(std::string name);
		HumanB(void);
		~HumanB();
		void attack();
		void setWeapon(Weapon &sword);
};


#endif