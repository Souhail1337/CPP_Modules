/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 23:26:04 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/21 15:32:50 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>
int main (int ac, char **av)
{
    std::string filename;
    std::string s1,s2;
    int index = 0;
    std::string str;
    if (ac != 4)
    {
        std::cout << "wrong number of arguments" << std::endl;
        return (0);
    }
    if (ac == 4)
    {
        filename = av[1];
        s1 = av[2];
        s2 = av[3];
        std::ifstream repl(filename.data());
        std::ofstream out(filename.append(".replace").data());
        if (!repl.is_open())
        {
            std::cout << "Error file doesnt exist" << std::endl;
            return (0);
        }
        if (!out.is_open())
        {
            std::cout << "Error file " <<  std::endl;
            return (0);
        }
        while(std::getline(repl, str))   
        {
                index = 0;
                while ((index = str.find(s1, index)) != std::string::npos)
                {
                    str.erase(index, s1.length());
                    str.insert(index,s2);
                    //index = index + s2.length();     
                }
                out << str << std::endl;     
                if (repl.eof())
                    break;

        }
    }
    
}