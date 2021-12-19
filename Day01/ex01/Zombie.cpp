/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:11:27 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/20 00:26:28 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}
void Zombie::annonce()
{
    std::cout << "<" << this->name << "> " << "Braàaaainzzz...." << std::endl;   
}
Zombie::~Zombie()
{
    std::cout <<  "<" << this->name << "> " <<  "is dead" << std::endl;
    return;
}