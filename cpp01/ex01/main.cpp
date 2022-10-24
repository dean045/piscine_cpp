/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:22:23 by brhajji-          #+#    #+#             */
/*   Updated: 2022/10/24 16:46:25 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
	Zombie *horde = zombieHorde(5, "Fred");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete [](horde);
	return (0);
}