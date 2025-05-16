/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:54:51 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/16 15:45:11 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include <stdexcept>

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;

class Intern
{
  public:
    Intern();
    Intern(const Intern& copy);
    Intern& operator=(const Intern& copy);
    virtual ~Intern();

    AForm* makeForm(const std::string& formName, const std::string& target);
    
    
  };
  
  AForm* makeShrubberyForm(const std::string& target);
  AForm* makeRobotomyForm(const std::string& target);
  AForm* makePresidentForm(const std::string& target);

#endif