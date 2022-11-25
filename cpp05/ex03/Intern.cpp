/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:39:06 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/25 18:11:29 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	(void)(src);
}

Intern::~Intern()
{
}


Intern &				Intern::operator=( Intern const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	(void)(rhs);
	return *this;
}

Form *Intern::Pf(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::Rf(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::Sf(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form *Intern::makeForm(std::string name, std::string target)
{
	if (name.empty())
	{
		Form* (Intern::*func[3])(std::string ) = { &Intern::Pf, &Intern::Rf, &Intern::Sf};
		std::string word[3] = {"presidential form", "robotomy request", "shrubbery form"};
		for (int i = 0; i < 3; i++)
		{
			if (!name.compare(word[i]))
			{
				return (this->*(func[i]))(target);
			}
		}
	}
	std::cout<<"ERR"<<std::endl;
	return (NULL);
}
