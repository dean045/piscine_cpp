/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 01:22:58 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/25 11:37:14 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form(target, 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : Form(src)
{
    this->target = src.target;
}


RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
	std::cout << "RobotomyRequestForm Assignation operator called" << std::endl;
	if (this != &src)
    {
        *this = src;
    }
    return (*this);
}

const char* RobotomyRequestForm::BadLuckException::what(void) const throw() 
{
  return ("L'operation de robotomisation a échoué.");
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (this->gradeX < executor.getGrade())
    {
        throw Form::GradeTooLowException ();
    }
	if (!(this->sign))
    {
        throw Form::NotSignedException ();
    }
	srand ( time(NULL) );
	int x = rand() % 2;
	//std::cout<<"x = "<<x<<"  "<<std::endl;
	if (x % 2)
    {
        std::cout<<"* BRUIT DE PERCEUSE* VRVRRVRVRVRVRVRVRRVRVRVR"<<std::endl;
		std::cout<<this->target<<" a été robotomisée avec succès."<<std::endl;
    }
	else
        throw RobotomyRequestForm::BadLuckException ();
}
