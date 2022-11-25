/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:02:14 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/10 13:51:30 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

class Dog : public Animal
{
	protected :
		
	public :
		Dog();
		~Dog();
		Dog(const Dog& src);
		Dog& operator=(const Dog& src);
		void makeSound() const;
};

#endif