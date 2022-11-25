/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:02:14 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/11 15:26:51 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

class Dog : public Animal
{
	private :
		Brain *brain;
	public :
		Dog();
		virtual ~Dog();
		Dog(const Dog& src);
		Dog& operator=(const Dog& src);
		void makeSound() const;
};

#endif