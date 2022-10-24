/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:46:05 by brhajji-          #+#    #+#             */
/*   Updated: 2022/10/24 20:20:33 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include "HumanB.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon		sword;
	public:
		HumanA(std::string name, Weapon sword);
		~HumanA();
		void attack();
		void setWeapon(Weapon &object);
};



#endif