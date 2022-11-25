/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:01:40 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/11 15:26:57 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

class Cat : public Animal
{
	private :
		Brain *brain;
	public :
		Cat();
		virtual ~Cat();
		Cat(const Cat& src);
		Cat& operator=(const Cat& src);
		void makeSound() const;
};

#endif