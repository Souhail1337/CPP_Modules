/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 04:10:44 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/15 10:57:19 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phone.hpp"
#include <stdlib.h>
std::string get_input()
{
    std::string in;
    std::cout << "enter your command between ADD, EXIT , and SEARCH" <<std::endl;
    std::getline(std::cin, in);
    return(in);
}
Phone::Phone(void)
{
    //std::cout<< "test const" <<std::endl;
    return ;//non-type de return;
}
Contact Contact::get_cont()
{
    Contact contact;
    std::string str;
    std::cout << "Enter First Name : ";
    std::getline(std::cin, str);
    // this->setfirst(str);
    this->first_name = str;
    std::cout << "Enter last Name : ";
    std::getline(std::cin, str);
    this->last_name = str;
    std::cout << "Enter Nickname : ";
    std::getline(std::cin, str);
    this->Nickname = str;
    std::cout << "Enter Phone Number : ";
    std::getline(std::cin, str);
    this->Phone_number = str;
    std::cout << "Enter your Dark Secret : ";
    std::getline(std::cin, str);
    this->dark_sercret = str;
    return (contact);

}

Phone::~Phone(void)
{
}

void Contact::print_contac()
{
    std::cout << "name : " << first_name << std::endl;
    std::cout << "last name " << last_name << std::endl;
    std::cout << "nickname : " << Nickname << std::endl;
    std::cout << "Phone number " << Phone_number << std::endl;
    std::cout << "dark secret : " << dark_sercret << std::endl;    
}
std::string trimi(std::string str)
{
    if (str.length() > 9)
    {
        str = str.substr(0, 10);
        str[9] = '.';
    }
    return (str);
}
bool isNum(const std::string& str)
{
    for (unsigned long i = 0; i < str.size();i++)
    {
        if(std::isdigit(str[i]) == 0)
            return false;
    }
    return true;
}
void Contact::print_fln(int i)
{
    std::cout << std::setfill(' ') << std::setw(10) << i;
    std::cout << "|" ;
    std::cout << std::setfill(' ') << std::setw(10) << trimi(first_name);
    std::cout << "|";
    std::cout << std::setfill(' ') << std::setw(10) << trimi(last_name);
     std::cout << "|";
    std::cout << std::setfill(' ') << std::setw(10) << trimi(Nickname); 
    std::cout << "|" << std::endl;

}
void search_contac(Contact *contact, int i)
{
    unsigned long j = 0;
    std::string str;
     std::cout << std::setfill(' ') << std::setw(10) << "id";
    std::cout << "|" ;
    std::cout << std::setfill(' ') << std::setw(10) << "First name";
    std::cout << "|";
    std::cout << std::setfill(' ') << std::setw(10) << "Last name";
     std::cout << "|";
    std::cout << std::setfill(' ') << std::setw(10) << "Nickname"; 
    std::cout << "|" << std::endl;
    while((int)j < i)
    {
        contact[j].print_fln(j + 1);
        j++;
    }
    std::cout << "Ina Contact bghiti njebdoh : " ;
    std::getline(std::cin, str);
    if(isNum(str) == 0)
        std::cout << "dekhel lina ra9m akhay" << std::endl;
    else
    {
    j = std::stoul(str);
    
    if ((int)j > i)
        std::cout << "Had lindex akhay rah makaynsh wllh" << std::endl;
    else if (j == 0)
        std::cout << "kanbdaw l7ssab mn 1 ;) malk 3la had l9walb " << std::endl;
    else
        contact[j - 1].print_contac();
    }
    return;
}
int main(void)
{
    int count = 0;
    Contact contact[8];
    std::string input ;
    input = get_input();
    while(1)
    {
        if (input == "ADD" && count >= 8)
            std::cout << "Sorry, Your Reached Your Max Number of Contacts" << std::endl;
        else if (input == "ADD")
        {
            contact[count].get_cont();
            count++;
        }
        else if (input == "EXIT")
        {
            std::cout << "Thanks for using our service :)" << std::endl;
            exit(0);
        }
        else if (input == "SEARCH" && count > 0)
        {
            search_contac(contact, count);
        }
        else if (input == "SEARCH" && count == 0)
            std::cout << "Stop being introvert, ma3ndk ta friend" << std::endl;        
        else
            std::cout << "glna lik dekhel ya ADD, SEARCH wla EXIT" << std::endl;
        
        std::cout << "Ahah w db : ";
        std::getline(std::cin, input);
        if (std::cin.eof())
        {
            std::cout << std::endl << "Couldn't read input" << std::endl;
            exit(1);
        }
    }   
}