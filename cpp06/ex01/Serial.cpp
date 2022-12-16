/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serial.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:25:38 by brhajji-          #+#    #+#             */
/*   Updated: 2022/12/15 18:39:09 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Serial.hpp"

uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*deserialize(uintptr_t ptr)
{
	return reinterpret_cast<Data *>(ptr);
}

std::ostream&	operator<<(std::ostream &flux, const Data &d)
{
	return flux << d.ptr << std::endl;
}