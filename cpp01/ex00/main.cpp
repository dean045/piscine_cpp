/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:22:23 by brhajji-          #+#    #+#             */
/*   Updated: 2022/10/24 15:03:16 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
	randomChump("LeFredTemporaire");
	randomChump("LeFredTemporaire2");
	Zombie *ted = newZombie("LeTed");
	ted->announce();
	delete ted;
}