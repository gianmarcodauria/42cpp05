/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:25:05 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/12 19:37:20 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    _name = name;
    _grade = grade;
}


Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destroyed" << std::endl;    
}


const std::string& Bureaucrat::getName() const
{
    return _name;
}


int Bureaucrat::getGrade() const
{
    return _grade;
}


Bureaucrat::Bureaucrat(const Bureaucrat& copy)
    : _name(copy._name), _grade(copy._grade)
{
    std::cout << getName() << " copy created!" << std::endl;
}


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
    if (this != &copy)
    {
        _name = copy._name;
        _grade = copy._grade;
    }
    return *this;
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too HIGH";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too LOW";
}

void Bureaucrat::incrementGrade()
{
    if (_grade <= 1)
        throw GradeTooHighException();
    _grade--;
}


void Bureaucrat::decrementGrade()
{
    if (_grade >= 150)
        throw GradeTooHighException();
    _grade++;
}


std::ostream& operator<<(std::ostream& os,
    const Bureaucrat& beaurocrat)
{
    os << beaurocrat.getName() << " has grade " <<
        beaurocrat.getGrade() << std::endl;
    return os;
}
