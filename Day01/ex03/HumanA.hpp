/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 01:22:42 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/20 05:05:50 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"
    
class HumanA
{
    private:
        std::string name;
        Weapon &weapon;

    public:
       // HumanA();
        HumanA(std::string name, Weapon& weapon);
        void attack();
        ~HumanA();
        

};


#endif 