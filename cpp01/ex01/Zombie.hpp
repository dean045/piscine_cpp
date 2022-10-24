/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:27:10 by brhajji-          #+#    #+#             */
/*   Updated: 2022/10/24 16:31:53 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>


class Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		Zombie(std::string	name);
		~Zombie();
		void 	setZombieName(std::string	name);
		void	announce();
};

Zombie* zombieHorde( int N, std::string name );

#endif