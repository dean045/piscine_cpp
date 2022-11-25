/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:01:40 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/10 13:51:47 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

class Cat : public Animal
{
	protected :
		
	public :
		Cat();
		~Cat();
		Cat(const Cat& src);
		Cat& operator=(const Cat& src);
		void makeSound() const;
};

#endif