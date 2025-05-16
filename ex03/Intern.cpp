/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 15:01:05 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/16 15:52:11 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern()
{
    std::cout << "Intern has been created" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern has been destroyed" << std::endl;
}

Intern::Intern(const Intern& copy)
{
    (void)copy;
    std::cout << "Copy constructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}



AForm* makeShrubberyForm(const std::string& target)
{
    return new ShrubberyCreationForm(target);
}

AForm* makeRobotomyForm(const std::string& target)
{
    return new RobotomyRequestForm(target);
}

AForm* makePresidentForm(const std::string& target)
{
    return new PresidentialPardonForm(target);
}



AForm* Intern::makeForm(const std::string& formName, const std::string& target)
{
    std::string form[3] =  {"ShrubberyForm", "RobotomyForm", "PresidentForm"};
    //form[3] = {"ShrubberyForm", "RobotomyForm", "PresidentForm"};


    AForm* (*formFunctions[3])(std::string const&) = { &makeShrubberyForm, &makeRobotomyForm, &makePresidentForm };
    
    for (int i = 0; i < 3; i++)
    {
        if (formName == form[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return formFunctions[i](target);
        }
    }
    std::cerr << formName << " unknown" << std::endl;
    return NULL;

}