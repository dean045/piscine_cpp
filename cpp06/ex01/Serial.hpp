/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serial.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:25:32 by brhajji-          #+#    #+#             */
/*   Updated: 2022/12/15 21:16:28 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIAL_HPP
# define SERIAL_HPP

#include<iostream>
#include<stdint.h>

typedef struct s_serial
{
	int	ptr;	
} Data;

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t ptr);

std::ostream&	operator<<(std::ostream &flux, const Data &d);

#endif