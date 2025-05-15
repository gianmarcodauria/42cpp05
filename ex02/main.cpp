/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:26:12 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/15 15:08:41 by gd-auria         ###   ########.fr       */
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
            Bureaucrat bureaucrat("Anton", 21);
            RobotomyRequestForm rForm("robotHouse");
            bureaucrat.signForm(rForm);
            rForm.execute(bureaucrat);


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
