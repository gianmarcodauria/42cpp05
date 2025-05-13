/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:03:46 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/13 18:28:40 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string& name, int gradeToSign, int gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();

    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooHighException();
    _name = name;
    _signed = false;
    _gradeToSign = gradeToSign;
    _gradeToExecute = gradeToExecute;
}

Form::Form(const Form& copy)
    : _name(copy._name)
{
    std::cout << getName() << " copy created!" << std::endl;
}


Form& Form::operator=(const Form& copy)
{
    if (this != &copy)
    {
        _name = copy._name;
        _signed = copy._signed;
        _gradeToSign = copy._gradeToSign;
        _gradeToExecute = copy._gradeToExecute;
    }
    return *this;
}

const std::string& Form::getName() const
{
    return _name;
}


Form::~Form()
{
}


bool Form::isSigned() const
{
    return _signed;
}


int Form::getGradeToSign() const
{
    return _gradeToSign;
}


int Form::getGradeToExecute() const
{
    return _gradeToExecute;
}



const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

const char* Form::FormUnsignedException::what() const throw()
{
    return "Form is unsigned!";
}



void Form::bureaucratSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    _signed = true;
}


std::ostream& operator<<(std::ostream& os, const Form& form)
{
    std::string _signedText;

    if (form.isSigned() == true)
        _signedText = " ";
    os << "Form is " << form.getName() << std::endl;
    os << " it is signed? " << _signedText << std::endl;
    os << "Grade to sign is: " << form.getGradeToSign() << std::endl;
    os << "Grade to execute is: " << form.getGradeToExecute() << std::endl;

    return os;
}






