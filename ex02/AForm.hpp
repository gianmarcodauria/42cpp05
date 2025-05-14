/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:06:15 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/13 18:32:24 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string _name;
        bool    _signed;
        int _gradeToSign;
        int _gradeToExecute;
        
    public:

        Form(std::string& name, int gradeToSign, int gradeToExecute);
        Form(const Form& copy);
        Form& operator=(const Form& copy);
        
        const std::string& getName() const;
        bool isSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        
        void bureaucratSigned(const Bureaucrat& bureaucrat);
        virtual void execute(Bureaucrat const& exec) const = 0;
        
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
        
        class FormUnsignedException : public std::exception
        {
            public:
            const char* what() const throw();
        };
        virtual ~Form();
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif