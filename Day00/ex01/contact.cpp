/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 03:35:38 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/15 10:36:13 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
Contact::Contact()
{
    //std::cout << "const called";
    return;
}


 

std::string Contact::get_first()
{
    return this->first_name;
}
std::string Contact::get_last()
{
    return this->last_name;
}

std::string Contact::get_nick()
{
    return this->Nickname;
}

Contact::~Contact()
{

}
