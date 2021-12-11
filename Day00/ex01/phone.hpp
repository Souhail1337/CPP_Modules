/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 04:09:23 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/11 11:06:39 by sel-fcht         ###   ########.fr       */
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
        
        void add_contact(Contact contact);
        void search_contact(int ind);
        void show_contact(int id);
        char *get_prompt();
        ~Phone(void);
};

#endif