/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 07:21:06 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/22 17:01:29 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{

}  

void Karen::debug()
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;

}

void Karen::info()
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}
void Karen::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month. " << std::endl;

}
void Karen::error()
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
    int i = 0;
    void (Karen::*test[4]) (void);
    std::string str[4] = {"DEBUG","INFO", "WARNING", "ERROR",};
    test[0] = &Karen::debug;
    test[1] = &Karen::info;
    test[2] = &Karen::warning;
    test[3] = &Karen::error;   
    while(i < 4)
    {
        if (str[i] == level)
        {
            (this->*test[i])();
            return;
        }
        i++;
    }
        std::cout << "Please Enter : " << std::endl;
        std::cout << "DEBUG || WARNING || ERROR || INFO " << std::endl;
        return;
}
Karen::~Karen()
{
    return ;
}