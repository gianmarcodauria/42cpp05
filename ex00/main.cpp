/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:26:12 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/12 19:39:47 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(int argc, char **argv)
{
    (void)argv;

    if (argc != 1)
        return 1;

    try
    {
        Bureaucrat gino("Gino", 0);
    }
    catch(const std::exception& exception)
    {
        std::cerr << exception.what() << std::endl;
    }
    
    std::cout << " ---------------------------------------- " << std::endl;

    try
    {
        Bureaucrat marco("Marco", 151);
    }
    catch(const std::exception& exception)
    {
        std::cerr << exception.what() << std::endl;
    }

    std::cout << " ---------------------------------------- " << std::endl;


    try
    {
        Bureaucrat luca("Luca", 2);
        Bureaucrat giovanni("Giovanni", 149);
        
        luca.incrementGrade();
        giovanni.decrementGrade();
    
        std::cout << luca << std::endl;
        std::cout << giovanni << std::endl;
    }

    catch(const std::exception& exception)
    {
        std::cerr << exception.what() << '\n';
    }
    
    return 0;
}
