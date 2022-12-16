/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 23:58:48 by brhajji-          #+#    #+#             */
/*   Updated: 2022/12/16 00:41:08 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cstdlib> 

class Base
{
	public :
		virtual ~Base();
};

# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif