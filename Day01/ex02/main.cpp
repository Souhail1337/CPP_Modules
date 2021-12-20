/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 00:33:46 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/20 01:13:29 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "THIS NAME IS USELESS";
    std::string* stringPTR = &str;
    std::string& stringREF = str;
    std::cout << "Memory of the string : " << &str << " // value of the string : " << str << std::endl;
    std::cout << "Memory of the stringPTR : " << stringPTR << " // value of the stringPTR " << *stringPTR << std::endl;
    std::cout << "Memory of the stringREF : " << &stringREF << " // value of the stringREF" << stringREF << std::endl;
    
    return (0);
     
}