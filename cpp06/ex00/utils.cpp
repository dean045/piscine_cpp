/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:53:54 by brhajji-          #+#    #+#             */
/*   Updated: 2022/12/17 00:32:48 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

Utils::Utils(std::string value) : val(value), is_char(false), is_int(false), is_double(false), is_float(false)
{
	return;
}

Utils::Utils(Utils const &src)
{
	*this = src;
	return;
}

Utils::~Utils(void)
{
	return;
}

Utils	&Utils::operator=(Utils const &src)
{
	if (this != &src)
	{
		this->val = src.val;
		this->is_char = src.is_char;
		this->is_int = src.is_int;
		this->is_double = src.is_double;
		this->is_float = src.is_float;
	}
	return (*this);
}

void	Utils::findType(void)
{
	int 	lenght = this->val.length();
	bool	point = false;
	long	nb;
	int		i = 0;
	
	if (!this->val.compare("nan") || !this->val.compare("nanf")
		|| !this->val.compare("+inf") || !this->val.compare("-inf")
		|| !this->val.compare("+inff") || !this->val.compare("-inff"))
	{
		this->is_float = true;
		this->is_double = true;
		return;
	}
	if (lenght == 1 && (isalpha(this->val[0]) || isprint(this->val[0])))
	{
		this->is_char = true;
		return;
	}
	else if (lenght >= 1)
	{
		if (this->val[0] == '+' || this->val[0] == '-' || isdigit(this->val[0]) || this->val[0] == '.') // check if valid number
		{
			if (this->val[i] == '.' && point == false)
					point = true;
			while (++i < lenght - 1)
			{
				if (this->val[i] == '.' && point == false)
					point = true;
				else if (this->val[i] == '.' && point == true)
					return;
				else if (!isdigit(this->val[i]))
					return;
			}
		}
		if (isdigit(this->val[i]) && point == true) // its's double
		{
			this->is_double = true;
			return;
		}
		else if (this->val[i] == 'f') // it's float
		{
			this->is_float = true;
			return;
		}
		else // it's int
		{
			nb = strtol(this->val.c_str(), NULL, 10);
			if (nb > INT_MAX || nb < INT_MIN || !isdigit(this->val[i]))
			{
				this->is_double = true;
				return;
			}
			else
				this->is_int = true;
		}
	}
}

void	Utils::to_char(void)
{
	char	c;

	c = this->val[0];
	if (c < CHAR_MIN || c > CHAR_MAX)
		std::cout << "char: impossible" << std::endl; 
	else	
		(c > 32 && c < CHAR_MAX) ? std::cout << "char: " << c << std::endl : std::cout << "char: not displayable" << std::endl; 
	std::cout << "int: " << static_cast<int>(c) << std::endl; 
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl; 
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl; 
}

void	Utils::to_int(void)
{
	int	nb;

	nb = atoi(this->val.c_str());
	if (nb < CHAR_MIN || nb > CHAR_MAX)
		std::cout << "char: impossible" << std::endl; 
	else	
		(nb > 32 && nb < CHAR_MAX) ? std::cout << "char: " << static_cast<char>(nb) << std::endl : std::cout << "char: not displayable" << std::endl;
	std::cout << "int: " << nb << std::endl; 
	std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl; 
	std::cout << "double: " << static_cast<double>(nb) << ".0" << std::endl;
	
}

void	Utils::to_double(void)
{
	double	nb;

	nb = strtod(this->val.c_str(), NULL);
	if (static_cast<int>(nb) < CHAR_MIN || static_cast<int>(nb) > CHAR_MAX)
		std::cout << "char: impossible" << std::endl; 
	else	
		(static_cast<int>(nb) > 32 && static_cast<int>(nb) < CHAR_MAX) ? std::cout << "char: " << static_cast<char>(nb) << std::endl : std::cout << "char: not displayable" << std::endl;
	(static_cast<long long>(nb) > INT_MIN && static_cast<long long>(nb) < INT_MAX) ? std::cout << "int: " << static_cast<int>(nb) << std::endl : std::cout << "int: impossible" << std::endl;
	(nb == static_cast<int>(nb)) ? std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl : std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	(nb == static_cast<int>(nb)) ? std::cout << "double: " << nb << ".0" << std::endl : std::cout << "double " << nb << std::endl;
}

void	Utils::to_float(void)
{
	float	nb;

	nb = strtof(this->val.c_str(), NULL);
	if (static_cast<int>(nb) < CHAR_MIN || static_cast<int>(nb) > CHAR_MAX)
		std::cout << "char: impossible" << std::endl; 
	else	
		(static_cast<int>(nb) > 32 && static_cast<int>(nb) < CHAR_MAX) ? std::cout << "char: " << static_cast<char>(nb) << std::endl : std::cout << "char: not displayable" << std::endl;
	(static_cast<long>(nb) > INT_MIN && static_cast<long>(nb) < INT_MAX) ? std::cout << "int: " << static_cast<int>(nb) << std::endl : std::cout << "int: impossible" << std::endl; 
	(nb == static_cast<int>(nb)) ? std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl : std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
	(nb == static_cast<int>(nb)) ? std::cout << "double: " << nb << ".0" << std::endl : std::cout << "double " << nb << std::endl;
	
}

void	Utils::to_spec(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (!this->val.compare("nanf") || !this->val.compare("+inff") || !this->val.compare("-inff"))
	{
		std::cout << "float: " << this->val << std::endl;
		std::cout << "double: " << this->val.substr(0, (this->val.length() - 1)) << std::endl;
	}
	else
	{
		std::cout << "float: " << this->val << "f" << std::endl;
		std::cout << "double: " << this->val << std::endl;
	}
}

void Utils::convert(void)
{
	if (this->is_char == true)
		return (to_char());
	else if (this->is_int == true)
		return (to_int());
	else if (this->is_float == true && this->is_double == true)
		return (to_spec());
	else if (this->is_double == true)
		return (to_double());
	else if (this->is_float == true)
		return (to_float());
	else
		std::cout << "impossible to convert." << std::endl;
}
