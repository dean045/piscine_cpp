/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:03:12 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/11 15:14:23 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
class Animal
{
	protected :
		std::string type;
	public :
		Animal();
		virtual ~Animal();
		Animal(const Animal& src);
		Animal& operator=(const Animal& src);
		std::string getType() const;
		void setType(const std::string& src);
		virtual void makeSound() const;
};

# include "Brain.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
#endif