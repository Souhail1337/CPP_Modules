/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:35:08 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/19 20:13:22 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <ctime>
int main ()
{
   // std::srand(static_cast<unsigned int>(std::time(NULL)));
    Zombie zombie = Zombie("simo life");
    Zombie *heap = newZombie("Heap Zombie");
    zombie.annonce();
    heap->annonce();
    delete heap;
    randomChump("Random Chump");
    return (0);
}