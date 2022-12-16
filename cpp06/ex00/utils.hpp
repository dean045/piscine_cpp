/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:52:24 by brhajji-          #+#    #+#             */
/*   Updated: 2022/12/13 16:04:48 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <climits>

class Utils
{
	private:
		std::string	val;
		bool		is_char;
		bool		is_int;
		bool		is_double;
		bool		is_float;
	public:
	
		Utils(std::string value);
		Utils(Utils const &src);
		~Utils(void);

		Utils	&operator=(Utils const &src);

		void	findType(void);
		void	convert(void);
		void	to_char(void);
		void	to_int(void);
		void	to_double(void);
		void	to_float(void);
		void	to_spec(void);
		
};

#endif