/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:23:43 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/25 11:18:41 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

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

Bureaucrat::Bureaucrat(const Bureaucrat& src) : name(src.getName()), grade(src.getGrade())
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& src) 
{
	if (this != &src)
    {
        this->grade = src.getGrade();
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

void Bureaucrat::signForm(Form *f)
{
	try
	{
		f->beSigned(*this);
		std::cout<<this->name<<" signed "<<f->getName()<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr<<this->name<<" couldn't sign "<<f->getName()<<" because "<<e.what()<<std::endl;
	}
}

std::ostream&	operator<<(std::ostream& fd, const Bureaucrat& src)
{
	fd<<src.getName()<<", bureaucrat grade "<<src.getGrade()<<".";
	return fd;
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout<<this->name<<" executed "<<form.getName()<<"."<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr<<"failure : "<<e.what() <<" "<<form.getName()<<"."<<std::endl;
	}
}