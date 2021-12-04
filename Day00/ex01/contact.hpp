/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:19:29 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/04 19:37:41 by sel-fcht         ###   ########.fr       */
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
        int get_info();                                                                            
        int print_concacts();
        void print_contac(void);
        std::string test1(void);
        void search_contact(void);
        std::string input;
};


#endif
