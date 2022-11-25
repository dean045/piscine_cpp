/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:23:43 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/25 17:50:51 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) :name(name), grade(grade)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

const std::string Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& src) 
{
	if (this != &src)
    {
        this->grade = src.grade;
    }
    return (*this);
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw() 
{
  return ("Bureaucrat Grade Too High");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw() 
{
  return ("Bureaucrat Grade Too Low");
}


void Bureaucrat::incr()
{
	if (this->grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;
}

void Bureaucrat::desincr()
{
	if (this->grade >= 150)
		throw Bureaucrat::GradeTooLowException ();
	else
		this->grade++;
}

std::ostream&	operator<<(std::ostream& fd, const Bureaucrat& src)
{
	fd<<src.getName()<<", bureaucrat grade "<<src.getGrade()<<".";
	return fd;
}