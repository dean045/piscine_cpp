/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:46:13 by brhajji-          #+#    #+#             */
/*   Updated: 2022/10/24 19:45:05 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

int main()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	Weapon club1 = Weapon("crude spiked club");
	HumanB jim1("Jim1");
	jim1.setWeapon(club1);
	jim1.attack();
	club1.setType("some other type of club");
	jim1.attack();
	return 0;
}