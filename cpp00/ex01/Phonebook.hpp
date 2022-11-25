/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:34:27 by brhajji-          #+#    #+#             */
/*   Updated: 2022/10/28 15:13:22 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class Phonebook
{
    private:
        int     nb;
        Contact rep[8];
        void    Sort();
    public:
        Phonebook();
        ~Phonebook();
        void Print();
        Contact GetContact(int index);
        int Add(std::string prenom, std::string nom, std::string pseudo, std::string num, std::string secret, int i);
};

Phonebook::Phonebook()
{
    this->nb = 0;
    return ;
}

Phonebook::~Phonebook()
{
    return ;
}

int Phonebook::Add(std::string prenom, std::string nom, std::string pseudo, std::string num, std::string secret, int i)
{
    Contact nouveau;
    nouveau.Complete(prenom, nom, pseudo, num, secret, i % 7);

    if (nb < 8)
    {
        this->rep[this->nb] = nouveau;
        this->nb++;
    }
    else if (nb == 8)
    {
        this->rep[0] = nouveau;
        this->Sort();
    }
    else
        return (1);
    return (0);
}

void Phonebook::Sort()
{
    Contact tmp;

    tmp = this->rep[0];
    for (int i = 0; i < this->nb - 1; i++)
        this->rep[i] = this->rep[i + 1];
    this->rep[nb - 1] = tmp;
}

void Phonebook::Print()
{
    std::cout<<"     Index|First Name| Last Name|  Nickname"<<std::endl;
	for (int x = 0; x < this->nb; x++)
	{
		this->rep[x].PrintAllAttr();
	}
}

Contact Phonebook::GetContact(int index)
{
    Contact tmp;
    for (int i = 0; i < this->nb; i++)
    {
        if (this->rep[i].index == index)
            return (this->rep[i]);
    }
    return (tmp);
}

#endif