/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 01:23:55 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/20 23:31:36 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"



HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->name = name;
}
void HumanA::attack()
{
    std::cout << this->name << " attacks with " << this->weapon.get_type() << std::endl;
}
HumanA::~HumanA()
{
    return;
}
