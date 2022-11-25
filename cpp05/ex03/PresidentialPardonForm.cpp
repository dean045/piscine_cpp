/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:23:17 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/25 09:49:37 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form("PresidentialPardonForm", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : Form(src)
{
    this->target = src.target;
}


PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
	std::cout << "PresidentialPardonForm Assignation operator called" << std::endl;
	if (this != &src)
    {
        *this = src;
    }
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->gradeX < executor.getGrade())
    {
        throw Form::GradeTooLowException ();
    }
	if (!(this->sign))
    {
        throw Form::NotSignedException ();
    }
	std::cout<<this->target<<" a été pardonnée par Zaphod Beeblebrox."<<std::endl;
}
