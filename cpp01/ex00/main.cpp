/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:22:23 by brhajji-          #+#    #+#             */
/*   Updated: 2022/10/25 18:10:19 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
	Zombie *ted = newZombie("LeTed");
	ted->announce();
	randomChump("LeFredTemporaire");
	ted->announce();
	randomChump("LeFredTemporaire2");
	ted->announce();
	delete ted;
}