/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:34:53 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/15 14:42:01 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

void Zombie::annonce(void)
{ 
    std::cout << "" << this->name << "BraiiiiiiiiinnnnnZZZ" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name << "Is Dead" << std::endl;
}