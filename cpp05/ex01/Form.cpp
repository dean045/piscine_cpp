/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:37:08 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/18 22:18:52 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"

Form::Form(std::string const name, const int gradeS, const int gradeX) : name(name), gradeS(gradeS), gradeX(gradeX)
{
	if (gradeS < 1)
		throw (Form::GradeTooHighException());
	else if (gradeS > 150)
		throw (Form::GradeTooLowException());
	else if (gradeX > 150)
		throw (Form::GradeTooLowException());
	else if (gradeX < 1)
		throw (Form::GradeTooHighException());
	this->sign = 0;
}

Form::Form(const Form& src) : name(src.getName()), gradeS(src.getGradeS()), gradeX(src.getGradeX()), sign(src.getSign())
{
}

const std::string Form::getName() const
{
	return this->name;
}

int Form::getGradeS() const
{
	return this->gradeS;
}

int Form::getGradeX() const
{
	return this->gradeX;
}

bool Form::getSign() const
{
	return this->sign;
}

Form::~Form()
{
}

Form &Form::operator=(const Form& src) 
{
	if (this != &src)
    {
        this->sign = src.getSign();
    }
    return (*this);
}

const char* Form::GradeTooHighException::what(void) const throw() 
{
  return ("Grade Too High");
}

const char* Form::GradeTooLowException::what(void) const throw() 
{
  return ("Grade Too Low");
}

std::ostream&	operator<<(std::ostream& fd, const Form& src)
{
	fd<<src.getName()<<", gradeS "<<src.getGradeS()<<", gradeX "<<src.getGradeX()<<", Signed "<<src.getSign();
	return fd;
}

void Form::beSigned(const Bureaucrat b)
{
	if (b.getGrade() > this->gradeS)
	{
		throw Form::GradeTooLowException();
	}
	else
		this->sign = 1;
}
