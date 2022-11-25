/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 01:22:55 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/25 11:22:15 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTTOMYREQUESTFORM_HPP
# define ROBOTTOMYREQUESTFORM_HPP

class RobotomyRequestForm : public Form
{
	private:
		std::string target;
	public:
		class BadLuckException: public std::exception
		{
			public: const char* what(void) const throw();
		};
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& src);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& src);
		~RobotomyRequestForm();
		void execute(Bureaucrat const &executor) const;
};




#endif