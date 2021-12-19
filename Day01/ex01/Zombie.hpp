/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:19:44 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/20 00:28:33 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
    public:
        std::string name;
        Zombie();
        Zombie(std::string name);
        void annonce();
        ~Zombie();
};
Zombie* ZombieHorde(int N, std::string name);

#endif 