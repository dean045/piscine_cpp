/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:00:58 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/22 14:31:06 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "WrongAnimal.hpp"

int main()
{
	Animal tab[] = {Dog(), Cat(), Dog(), Cat(), Animal()};
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Dog* d = new Dog();
	const Dog* x = new Dog(*d);
	(void) (x);
	delete j;//should not create a leak
	delete i;

	return 0;
}