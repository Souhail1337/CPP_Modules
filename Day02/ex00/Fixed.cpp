/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 20:00:57 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/18 00:02:47 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
Fixed::Fixed()
{
    std::cout << "default constructor called" << std::endl;
    this->val = 0;
    return ;
}
Fixed::Fixed(int val1)
{
    val = val1;
    std::cout << "test from normal" << std::endl;
}
Fixed::Fixed( Fixed &p)
{
    val = p.val;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator= (Fixed& fixed)
{
    val = fixed.val;
    std::cout << "Assignment member function called" << std::endl;
   // bits = fixed.bits;
    return *this;
}

int Fixed::getRawBits(void)
{
    std::cout << "getRawbits member function called" << std::endl;
    return (this->val);
}
Fixed::~Fixed()
{
    std::cout << "destructor called" << std::endl;
    return ;
}