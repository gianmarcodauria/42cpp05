/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:45:49 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/14 14:50:44 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// class PresidentialPardonForm : public AForm
// {
//     public:
//         PresidentialPardonForm(std::string name) : AForm(name, 25, 5) {}
//         void execute(Bureaucrat const& executor) const
//         {
//             if (!isSigned())
//                 throw AForm::AFormUnsignedException();
//             if (executor.getGrade() > getGradeToExecute())
//                 throw AForm::GradeTooLowException();

//             std::cout << executor.getName() << " executes " << getName() << std::endl;
//         }
// };
