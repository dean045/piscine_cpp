/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:00:59 by brhajji-          #+#    #+#             */
/*   Updated: 2022/10/12 18:29:30 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char const *av[])
{
    if (ac == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    else
    {
        for (int i = 1; i < ac; i++)
        {
            std::string str(av[i]);
            for (int j = 0; j < (int)str.length(); j++)
                std::cout<<(char)std::toupper(av[i][j]);
        }
        std::cout<<std::endl;
    }
    return (0);
} 