/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:48:05 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/13 16:12:54 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>

#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        std::string _name;
        int _grade;

    public:
        Bureaucrat(const std::string& name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat& operator=(const Bureaucrat& copy);

        const std::string& getName() const;
        int getGrade() const;

        void incrementGrade();
        void decrementGrade();

        void signForm(Form& form) const;
        void execForm(Form& form) const;
    
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif