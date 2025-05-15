/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:45:52 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/15 15:09:11 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string name) : AForm(name, 72, 45)
{

}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    std::string target;
    if (!isSigned())
        throw AForm::AFormUnsignedException();
    if (executor.getGrade() > getGradeToExecute())
        throw AForm::GradeTooLowException();
            
    target = getName();
    if ((rand() % 2) == 0)
        std::cout << executor.getName() << " has been robotomized succesfully!" << std::endl;
    else
        std::cout << "Robotomy failed on " << getName() << std::endl;
}

