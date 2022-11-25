/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:37:21 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/25 13:39:26 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <stdlib.h>
# include <time.h>

class Bureaucrat;

class Form
{
	protected:
		const std::string name;
		const int	gradeS;
		const int	gradeX;
		bool		sign;
	public:
		class GradeTooHighException: public std::exception
		{
			public: const char* what(void) const throw();
		};

		class GradeTooLowException: public std::exception
		{
			public: const char* what(void) const throw();
		};

		class NotSignedException: public std::exception
		{
			public: const char* what(void) const throw();
		};

		virtual ~Form();
		const std::string getName() const;
		int getGradeS() const;
		int getGradeX() const;
		bool getSign() const;
		Form(const Form& src);
		Form(std::string const name, const int gradeS, const int gradeX);
		Form& operator=(const Form& src);
		void beSigned(const Bureaucrat &b);
		virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream&	operator<<(std::ostream& fd, const Form& src);
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

#endif