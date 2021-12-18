/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:34:53 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/18 15:36:38 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Const Called"<< std::endl;
    return ;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

void Zombie::annonce(void)
{ 
    std::cout << "" << this->name << " BraiiiiiiiiinnnnnZZZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "dest called" << std::endl;
    std::cout << "" << this->name << " Is Dead" << std::endl;
    return;
}
