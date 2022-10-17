/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:40:22 by brhajji-          #+#    #+#             */
/*   Updated: 2022/10/12 22:56:56 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		int			index;
		Contact();
		~Contact();
		void PrintAllAttr();
		void PrintAttr(std::string str);
		void PrintOne();
		void Complete(std::string prenom, std::string nom, std::string pseudo, std::string num, std::string secret, int i);
};

void Contact::Complete(std::string prenom, std::string nom, std::string pseudo, std::string num, std::string secret, int i)
{
	this->firstName = prenom;
	this->lastName = nom;
	this->nickName = pseudo;
	this->phoneNumber = num;
	this->darkestSecret = secret;
	this->index = i;
}

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::PrintAttr(std::string str)
{
	int w = -1;
	while (++w < 9 && w < (int)str.length())
		std::cout<<str[w];
    if (str.length() > 10)
        std::cout<<".";
    else if (str.length() == 10)
        std::cout<<str[9];
    else
        while (w++ < 10)
		    std::cout<<" ";
}

void Contact::PrintAllAttr()
{
	std::cout<<this->index;
    for (int i = 0; i < 9; i++)
        std::cout<<" ";
    std::cout<<"|";
    this->PrintAttr(this->firstName);
    std::cout<<"|";
    this->PrintAttr(this->lastName);
    std::cout<<"|";
    this->PrintAttr(this->nickName);
    std::cout<<std::endl;
}
void Contact::PrintOne()
{
	std::cout<<this->index<<std::endl;
	std::cout<<this->firstName<<std::endl;
	std::cout<<this->lastName<<std::endl;
	std::cout<<this->nickName<<std::endl;
	std::cout<<this->phoneNumber<<std::endl;
	std::cout<<this->darkestSecret<<std::endl;
}

#endif