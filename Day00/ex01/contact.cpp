/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 03:35:38 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/07 00:26:48 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string get_input()
{
    std::string in;
    std::cout << "enter your command between ADD, Exit , and SEARCH" <<std::endl;
    std::getline(std::cin, in);
    return(in);
}
void Contact::search_contact()
{
    std::cout << "SEARCHING.."<< std::endl;
    return;
}

std::string Contact::test1(void)
{
    int input = 1;
   
        std::cout << "Enter your Command between ADD,SEARCH, and EXIT" <<std::endl;
        std:getline(std::cin, this->input);
        while(this->input != "EXIT")
        {
            if (this->input == "EXIT")
            {
                input = 0;
                exit(1);
            }
            else if (this->input == "ADD")
                this->get_info();
            else if (this->input == "SEARCH")
                this->search_contact();
            else
            {
                std::cout << "Wrong";
                std::cout << "its : ADD, EXIT, SEARCH" << std::endl;
            }
            return (this->input);
        }
    
}

int Contact::get_info()
{
    std::cout << "Enter First Name :";
    std::getline(std::cin, first_name);
    std::cout << "Enter last Name :";
    std::getline(std::cin, last_name);
    std::cout << "Enter Nickname :";
    std::getline(std::cin, Nickname);
    std::cout << "Enter Phone Number :";
    std::getline(std::cin, Phone_number);
    std::cout << "Enter your Dark Secret :";
    std::getline(std::cin, dark_sercret);
    return (1);
}

void Contact::print_contac(void)
{
    std::cout << "name : " << this->first_name << std::endl;
    std::cout << "last name " << this->last_name << std::endl;
    std::cout << "nickname : " << this->Nickname << std::endl;
    std::cout << "Phone number " << this->Phone_number << std::endl;
    std::cout << "dark secret : " << this->dark_sercret << std::endl;    
}

int main(void)
{
    Contact contact[8];
    int count;
    count = 0;
    std::string test;
    test = get_input();
    while(test != "EXIT")
    {
       
        if (test.compare("ADD") == 0 && count < 8)
            contact[count++].get_info();
        else if (test == "ADD" && count >= 8)
            std::cout << "Too many Contacts added" << std::endl;
        else if (test.compare("EXIT") == 0)
            exit(0);
        else if (test.compare("SEARCH") == 0)
            std::cout << "Search botton" << std::endl;
        std::cout << "Ahah w db : ";
        std::getline(std::cin, test);
         std::cout << "CONTACTS ARE: " << count << std::endl;
         contact[count].print_contac();
         }
    return (0);
}