/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:19:29 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/14 16:05:37 by sel-fcht         ###   ########.fr       */
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
        Contact(std::string Afirst_name,std::string Alast_name,
        std::string ANickname, std::string APhone_number, std::string Adark_sercret)
        {
            // first_name = Afirst_name;
            // last_name = Alast_name;
            // Nickname = ANickname;
            // Phone_number = APhone_number;
            // dark_sercret = Adark_sercret;
        }
        void setfirst(const std::string& Afirst_name)
        {
            first_name = Afirst_name;
        }
        void setlast(std::string Alast_name)
        {
            last_name = Alast_name;
        }
        void setnick(const std::string& ANickname)
        {
            Nickname = ANickname;
        }
        void setphone(std::string APhone_number)
        {
            Phone_number = APhone_number;
        }
        void setdark(std::string Adark_sercret)
        {
            dark_sercret = Adark_sercret;
        }
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
        void print_contac(Contact);
        Contact get_cont();
        void print_fln(int i);
        int count;
        std::string input;
        ~Contact();
};


#endif
