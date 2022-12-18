/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 22:01:55 by brhajji-          #+#    #+#             */
/*   Updated: 2022/12/16 22:02:16 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include<iostream>
#include<string>

template <class T>
void swap(T& x,T& y)
{
     T temp;
     temp=x;
     x=y;
     y=temp;
}

template <class T>
T &min(T& x,T& y)
{
	return ((x > y) ? y : x);
}

template <class T>
T &max(T& x,T& y)
{
	return ((x < y) ? y : x);
}

#endif