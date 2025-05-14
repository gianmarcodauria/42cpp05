/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:46:00 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/14 14:49:39 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// class ShrubberyCreationForm : public AForm
// {
//     public:
//         ShrubberyCreationForm(std::string name) : AForm(name, 145, 137) {}
//         void execute(Bureaucrat const& executor) const
//         {
//             if (!isSigned())
//                 throw AForm::AFormUnsignedException();
//             if (executor.getGrade() > getGradeToExecute())
//                 throw AForm::GradeTooLowException();

//             std::cout << executor.getName() << " executes " << getName() << std::endl;
//         }
// };
