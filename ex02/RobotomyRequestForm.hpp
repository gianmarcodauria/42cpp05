/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:45:55 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/14 14:49:53 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// class RobotomyRequestForm : public AForm
// {
//     public:
//         RobotomyRequestForm(std::string name) : AForm(name, 72, 45) {}
//         void execute(Bureaucrat const& executor) const
//         {
//             if (!isSigned())
//                 throw AForm::AFormUnsignedException();
//             if (executor.getGrade() > getGradeToExecute())
//                 throw AForm::GradeTooLowException();

//             std::cout << executor.getName() << " executes " << getName() << std::endl;
//         }
// };
