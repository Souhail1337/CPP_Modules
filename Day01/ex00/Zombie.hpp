/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:10:05 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/15 14:45:29 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iosteam>
class Zombie
{
    private:
        std::string name;
        Zombie();
    public:
        Zombie(std::string _name);
        ~Zombie(void);
        void annonce();
};
Zombie *newZombie(std::string name);
void random(std::string name)


#endif