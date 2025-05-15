/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:26:12 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/15 17:03:09 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    if (argc == 1)
    {
        srand(time(NULL));
        try
        {
            // AmazonForm form("AmazonLogIn");
            // ShrubberyCreationForm sForm("home");
            // PresidentialPardonForm pForm("whiteHouse");
            Bureaucrat anton("Anton", 21);
            Bureaucrat luisa("Luisa", 50);
            Bureaucrat sara("Sara", 150);

            RobotomyRequestForm rForm("robotHouse");
            anton.signForm(rForm);
            rForm.execute(anton);


            // bureaucrat.signForm(sForm);
            // bureaucrat.signForm(pForm);


            // form.execute(bureaucrat);
        }
        catch(const std::exception& exception)
        {
            std::cerr << exception.what() << '\n';
        }
    }
    return 0;
}
