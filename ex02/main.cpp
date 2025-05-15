/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:26:12 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/15 14:00:12 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class AmazonForm : public AForm
{
    public:
        AmazonForm(std::string name) : AForm(name, 50, 25) {}
        void execute(Bureaucrat const& executor) const
        {
            if (!isSigned())
                throw AForm::AFormUnsignedException();
            if (executor.getGrade() > getGradeToExecute())
                throw AForm::GradeTooLowException();

            std::cout << executor.getName() << " executes " << getName() << std::endl;
        }
};

int main(int argc, char **argv)
{
    (void)argv;
    if (argc == 1)
    {
        try
        {
            AmazonForm form("AmazonLogIn");
            Bureaucrat bureaucrat("Anton", 21);

            bureaucrat.signForm(form);
            form.execute(bureaucrat);
        }
        catch(const std::exception& exception)
        {
            std::cerr << exception.what() << '\n';
        }
    }
    return 0;
}
