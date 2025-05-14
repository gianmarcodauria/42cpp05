/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:26:12 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/14 14:23:25 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

class AmazonForm : public Form
{
    public:
        AmazonForm(std::string name) : Form(name, 50, 25) {}
        void execute(Bureaucrat const& executor) const
        {
            if (!isSigned())
                throw Form::FormUnsignedException();
            if (executor.getGrade() > getGradeToExecute())
                throw Form::GradeTooLowException();

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
