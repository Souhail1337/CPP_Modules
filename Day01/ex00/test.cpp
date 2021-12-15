/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:53:54 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/12/15 12:57:03 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main()
{
    int *test = NULL;
    test = new int;
    *test = 21111;

    std::cout << "" << *test << std::endl;
    delete test;
    while(1);
    
}