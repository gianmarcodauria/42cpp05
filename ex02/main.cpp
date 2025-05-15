/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:26:12 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/15 17:48:49 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    if (argc == 1)
    {
        srand(time(NULL));
        try
        {
            Bureaucrat anton("Anton", 1);
            Bureaucrat luisa("Luisa", 50);
            Bureaucrat sara("Sara", 150);
            
            ShrubberyCreationForm sForm("home");
            PresidentialPardonForm pForm("whiteHouse");
            RobotomyRequestForm rForm("robotHouse");
        
            std::cout << "--------- SIGNING FORMS ---------" << std::endl;

            anton.signForm(sForm);
            anton.signForm(rForm);
            anton.signForm(pForm);

            std::cout << " >>> all signed and sealed <<<< by Anton" << std::endl;
    
            luisa.signForm(sForm);
            luisa.signForm(rForm);
            luisa.signForm(pForm);

            sara.signForm(sForm);
            sara.signForm(rForm);
            sara.signForm(pForm);
                  
            std::cout << " >>> all signed and sealed <<<< by Luisa and Sara" << std::endl;

            std::cout << "--------- ANTON EXECUTING FORMS -------" << std::endl;

            anton.execForm(sForm);
            anton.execForm(rForm);
            anton.execForm(pForm);
            
            std::cout << "--------- LUISA EXECUTING FORMS -------" << std::endl;

            luisa.execForm(sForm);
            luisa.execForm(rForm);
            luisa.execForm(pForm);

            std::cout << "--------- SARA EXECUTING FORMS -------" << std::endl;

            sara.execForm(sForm);
            sara.execForm(rForm);
            sara.execForm(pForm);            
        }
        catch(const std::exception& exception)
        {
            std::cerr << exception.what() << '\n';
        }
    }
    return 0;
}
