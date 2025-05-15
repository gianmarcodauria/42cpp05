/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:06:15 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/15 14:04:02 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        std::string _name;
        bool    _signed;
        int _gradeToSign;
        int _gradeToExecute;
        
    public:

        AForm(std::string& name, int gradeToSign, int gradeToExecute);
        AForm(const AForm& copy);
        AForm& operator=(const AForm& copy);
        
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
        
        class AFormUnsignedException : public std::exception
        {
            public:
            const char* what() const throw();
        };
        virtual ~AForm();
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif