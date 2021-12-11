/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 03:35:38 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/11 11:17:12 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(std::string first_name, std::string last_name, std::string nickname
                    std::string Phone_number, std::string dark_sercret)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->Phone_number = Phone_number;
    this->dark_sercret = dark_sercret;
}

std::string Contact::get_first()
{
    return this->first_name;
}
std::string Contact::get_last()
{
    return this->last_name;
}
std::string Contact::get_phone()
{
    return this->Phone_number;
}
std::string Contact::get_nick()
{
    return this->Nickname;
}
std::string Contact::get_dark()
{
    return this->dark_sercret;
}
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

void Contact::print_contac(Contact contact)
{
    std::cout << "name : " << contact.first_name << std::endl;
    std::cout << "last name " << contact.last_name << std::endl;
    std::cout << "nickname : " << contact.Nickname << std::endl;
    std::cout << "Phone number " << contact.Phone_number << std::endl;
    std::cout << "dark secret : " << contact.dark_sercret << std::endl;    
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
        contact[count].print_contac(contact[count]);
    }
    return (0);
}