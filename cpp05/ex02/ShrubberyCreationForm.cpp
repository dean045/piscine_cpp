/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:38:43 by brhajji-          #+#    #+#             */
/*   Updated: 2022/11/25 18:03:28 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form(target, 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : Form(src)
{
    this->target = src.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	std::cout << "ShrubberyCreationForm Assignation operator called" << std::endl;
	if (this != &src)
    {
        *this = src;
    }
    return (*this);
}

const char* ShrubberyCreationForm::OutfileException::what(void) const throw() 
{
  return ("Couldn't open or write on outfile");
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (this->gradeX < executor.getGrade())
    {
        throw Form::GradeTooLowException ();
    }
    if (!(this->sign))
    {
        throw Form::NotSignedException ();
    }
    std::string text("               ,@@@@@@@,\n       ,,,.   ,@@@@@@/@@,  .oo8888o.\n    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n   `&%\\ ` /%&'    |.|        \\ '|8'\n       |o|        | |         | |\n       |.|        | |         | |\n   \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n");
    const std::string filename(this->target + "_shrubbery");
    std::fstream outfile;

    outfile.open(filename.c_str(), std::ios_base::app);
    if (!outfile.is_open()) {
        throw ShrubberyCreationForm::OutfileException ();
    } else {
        outfile.write(text.data(), text.size());
        outfile.close();
    }
}
