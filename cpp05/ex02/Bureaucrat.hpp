/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:23:41 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/25 11:13:10 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Bureaucrat
{
private:
	std::string const	name;
	int					grade;
public:
	class GradeTooHighException: public std::exception
	{
		public: const char* what(void) const throw();
	};

	class GradeTooLowException: public std::exception
	{
		public: const char* what(void) const throw();
	};
	Bureaucrat();
	~Bureaucrat();
	std::string const getName() const;
	void signForm(Form *f);
	int	getGrade() const;
	void incr();
	void desincr();
	Bureaucrat(const Bureaucrat& src);
	Bureaucrat(const std::string name, int grade);
	Bureaucrat& operator=(const Bureaucrat& src);
	void executeForm(Form const & form);
};

std::ostream&	operator<<(std::ostream& fd, const Bureaucrat& src);


#endif