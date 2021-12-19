/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:19:31 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/20 00:27:40 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *ZombieHorde(int N, std::string name)
{
    int i = 0;
    Zombie *hasnaa = new Zombie[N];
    while(i < N)
    {
        hasnaa[i].name = name;
        i++;
    }
    i = 0;
    while(i < N)
    {
        hasnaa[i].annonce();
        i++;
    }
    return (hasnaa);
}