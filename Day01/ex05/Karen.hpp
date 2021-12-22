/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 07:17:52 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/22 16:00:55 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <iomanip>

class Karen
{
    private:
        void debug();
        void info();
        void warning();
        void error(); 
    public:
        Karen();
        ~Karen();
        void complain(std::string level);
        std::string level[4];
};

#endif