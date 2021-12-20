/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 01:23:49 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/20 01:30:23 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Weapon::Weapon(std::string type)
{
    this->type = type;
}

void Weapon::set_type(std::string type)
{
    this->type = type;
}
Weapon::get_type()
{
    return (this->type);
}

Weapon::~Weapon()
{
    return ;
}