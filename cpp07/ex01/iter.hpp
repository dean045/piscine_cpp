/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 22:02:40 by brhajji-          #+#    #+#             */
/*   Updated: 2022/12/17 00:57:07 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *tab, int size, void (*f)(T &tab))
{
    for (int i = 0; i < size; i++)
		(*f)(tab[i]);
}

template <typename T>
void incr(T &tab)
{
	std::cout << "tab -> "	<< tab << std::endl; 
}

#endif