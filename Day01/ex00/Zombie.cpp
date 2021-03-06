/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:34:53 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/19 17:01:30 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name) : name(name)
{
}

void Zombie::annonce(void)
{ 
    std::cout << "<" << this->name << "> " <<  "BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}

Zombie::~Zombie()
{
    std::cout << "<" << this->name << "> " << " Is Dead" << std::endl;
    return;
}
