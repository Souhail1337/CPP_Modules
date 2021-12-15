/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:19:29 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/15 10:57:02 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>


class Contact{
    private:
        std::string first_name;
        std::string last_name;
        std::string Nickname;
        std::string Phone_number;
        std::string dark_sercret;
    public:
        Contact();
        int get_info();
        void set_contact(std::string first_name,
        std::string last_name, std::string Nickname,
        std::string Phone_number, std::string dark_secret);
        std::string get_first();
        std::string get_first2(){
            return this->first_name;
        }
        std::string get_last();
        std::string get_nick();
        void print_contac();
        Contact get_cont();
        void print_fln(int i);
        int count;
        std::string input;
        ~Contact();
};


#endif
