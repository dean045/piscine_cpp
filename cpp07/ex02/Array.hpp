/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 23:14:22 by brhajji-          #+#    #+#             */
/*   Updated: 2022/12/18 14:30:34 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>
template <class T>
class Array {
private:
	unsigned int nb;
	T *tab;
public:
	Array(): nb(0), tab(NULL){};
	Array(unsigned int n): nb(n), tab(new T[n]){};
	Array& operator=(const Array &src)
	{
		if (this != &src)
		{
			if (this->tab)
				delete[] this->tab;
			this->nb = src.nb;
			this->tab = new T[nb];
			for (unsigned int i = 0; i < nb; i++)
				this->tab[i] = src.tab[i];
		}
		return (*this);
	};
	Array(const Array &src){
		*this = src;
	};
	~Array(){
		if (this->tab)
			delete[] tab;
		tab = NULL;
	};
	class OverFlow: public std::exception
	{
		public:
			const char *what() const throw()
			{
				return "OverFLow";
			}
	};
	unsigned int size() {return (this->nb);};
	T &operator[](unsigned int i)
	{
		if (!tab)
			throw std::domain_error("Tab is NULL");
		if (i < 0 || i >= this->nb)
			throw OverFlow();
		return this->tab[i];
	};	
};


#endif