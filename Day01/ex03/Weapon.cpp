/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 01:23:49 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/20 03:13:14 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

void Weapon::set_type(std::string type)
{
    this->type = type;
}
std::string &Weapon::get_type()
{
    return (this->type);
}

Weapon::~Weapon()
{
    return ;
}