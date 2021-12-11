/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:19:29 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/11 11:12:00 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>


class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string Nickname;
        std::string Phone_number;
        std::string dark_sercret;
    public:
        Contact();
        Contact(std::string first_name,std::string last_name,
        std::string Nickname, std::string Phone_number, std::string dark_sercret);
        int get_info();
        std::string get_first();
        std::string get_last();
        std::string get_nick();
        std::string get_phone();
        std::string get_dark();
        int count;
        std::string input;
        ~Contact();
};


#endif
