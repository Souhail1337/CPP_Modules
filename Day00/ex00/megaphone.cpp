/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:22:34 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/03 03:55:27 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char to_upper(char c)
{
    if (c >= 97 && c <= 122)
        c = c - 32;
    return (c);
}

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;
    if (ac > 1)
    {
        while(av[i])
        {
            j = 0;
            while(av[i][j]!= '\0')
            {
                std::cout << to_upper(av[i][j]);
                j++;
            }
            i++;
        }
    }
    else 
        std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}