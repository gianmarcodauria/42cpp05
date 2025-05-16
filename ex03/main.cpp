/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:26:12 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/16 16:04:01 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    if (argc == 1)
    {
        Intern intern;
        Bureaucrat anton("Anton", 1);
        AForm* form;

        form = intern.makeForm("RobotomyForm", "Bonny");
        try 
        {
            anton.signForm(*form);
            anton.execForm(*form);
        }
        catch(std::exception &excetpion)
        {
            std::cerr << excetpion.what() << std::endl;
        }
        delete form;
    }
        
    return 0;
}
