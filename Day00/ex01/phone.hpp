/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 04:09:23 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/04 03:58:14 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_HPP
#define PHONE_HPP
#include "contact.hpp"
class Phone{
    private:
    Contact contact[9];
    public:
        Phone(void);
        ~Phone(void);
        char *get_prompt();
        

};


#endif