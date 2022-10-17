/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:19:13 by brhajji-          #+#    #+#             */
/*   Updated: 2022/10/13 15:21:55 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

void Account::makeDeposit( int deposit )
{
    this->_amount += deposit;
    this->_totalNbDeposits++;
}