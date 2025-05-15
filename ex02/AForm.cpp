/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:03:46 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/15 14:03:41 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string& name, int gradeToSign, int gradeToExecute)
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

AForm::AForm(const AForm& copy)
    : _name(copy._name)
{
    std::cout << getName() << " copy created!" << std::endl;
}


AForm& AForm::operator=(const AForm& copy)
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

const std::string& AForm::getName() const
{
    return _name;
}


AForm::~AForm()
{
}


bool AForm::isSigned() const
{
    return _signed;
}


int AForm::getGradeToSign() const
{
    return _gradeToSign;
}


int AForm::getGradeToExecute() const
{
    return _gradeToExecute;
}



const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

const char* AForm::AFormUnsignedException::what() const throw()
{
    return "Form is unsigned!";
}



void AForm::bureaucratSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    _signed = true;
}


std::ostream& operator<<(std::ostream& os, const AForm& form)
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






