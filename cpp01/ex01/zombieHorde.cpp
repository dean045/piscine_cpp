/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:31:20 by brhajji-          #+#    #+#             */
/*   Updated: 2022/10/24 16:38:57 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*horde;

	horde = new Zombie[N];
	for(int i = 0; i < N; i++)
		horde[i].setZombieName(name);
	return (horde);
}