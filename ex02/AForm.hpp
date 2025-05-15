/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:06:15 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/15 16:25:39 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>


#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        std::string _name;
        bool    _signed;
        int _gradeToSign;
        int _gradeToExecute;
        std::string _target;
        
    public:
        AForm();
        AForm(const std::string& name, const std::string& target, int gradeToSign, int gradeToExecute);
        AForm(const AForm& copy);
        AForm& operator=(const AForm& copy);
        
        const std::string& getName() const;
        const std::string& getTarget() const;

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
        
        class AFormUnsignedException : public std::exception
        {
            public:
            const char* what() const throw();
        };
        virtual ~AForm();
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif