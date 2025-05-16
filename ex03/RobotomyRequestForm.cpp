/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:45:52 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/15 16:32:17 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm()
{
       
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotmyRequestForm", target, 72, 45)
{
       
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
    : AForm(copy)
{
    
}

RobotomyRequestForm::~RobotomyRequestForm()
{
       
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
    if (this != &copy)
        AForm::operator=(copy);
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!isSigned())
        throw AForm::AFormUnsignedException();
    if (executor.getGrade() > getGradeToExecute())
        throw AForm::GradeTooLowException();
            
    std::cout << " ZBZBZBZBZBZBZBZBZ " << std::endl;
        
    if ((rand() % 2) == 0)
        std::cout << getTarget() << " has been robotomized succesfully!" << std::endl;
    else
        std::cout << "Robotomy failed on " << getTarget() << std::endl;
}

