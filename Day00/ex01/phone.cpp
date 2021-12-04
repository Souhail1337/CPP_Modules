/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 04:10:44 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/04 03:43:35 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phone.hpp"
Phone::Phone(void)
{
    std::cout<< "test const" <<std::endl;
    return ;//non-type de return;
}

Phone::~Phone(void)
{
    std::cout << "dest called" <<std::endl;
    return ;
}

