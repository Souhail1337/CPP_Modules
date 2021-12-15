/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 04:09:23 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/14 12:02:19 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_HPP
#define PHONE_HPP

#include "contact.hpp"
#include <iomanip>

class Phone{
    private:
        Contact contact[8];
        int counter;
    public:
        Phone(void);
        Contact get_info();
        void add_contact(Contact contact);
        void search_contact(int ind);
        void show_contact(int id);
        
        void get_cont();
        ~Phone(void);
};

#endif