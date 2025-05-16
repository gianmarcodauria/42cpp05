/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:45:57 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/15 17:53:04 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", target, 145, 137)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy)
{
    
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
    if (this != &copy)
        AForm::operator=(copy);
    return *this;
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!isSigned())
        throw AForm::AFormUnsignedException();
    if (executor.getGrade() > getGradeToExecute())
        throw AForm::GradeTooLowException();

    std::ofstream file((getTarget() + "_shrubbery").c_str());
    if (!file)
        throw std::runtime_error("Failed to open file");
    file << "       .\n";
    file <<  "      .         \n";  
    file << ".              .              ;%     ;\n";   
    file << ",           ,                :;%  %\n";   
    file << ":         ;                   :;%;'    .,\n";   
    file << ",.        %;     %;            ;        %;'    ,;\n";
    file << ";       ;%;  %%;        ,     %;    ;%;    ,%'\n";
    file << "%;       %;%;      ,  ;       %;  ;%;   ,%;' \n";
    file << ";%;      %;        ;%;        % ;%;  ,%;'\n";
    file << "`%;.     ;%;     %;'         `;%%;.%;'\n";
    file << "`:;%.    ;%%. %@;        %; ;@%;%'\n";
    file << "`:%;.  :;bd%;          %;@%;'\n";
    file << "`@%:.  :;%.         ;@@%;'   \n";
    file << "`@%.  `;@%.      ;@@%;   \n";      
    file << "`@%%. `@%%    ;@@%;  \n";      
    file << ";@%. :@%%  %@@%;   \n";    
    file << "%@bd%%%bd%%:;   \n";  
    file << "#@%%%%%:;;\n";
    file << "%@@%%%::;\n";
    file << "%@@@%(o);  . '        \n"; 
    file << "%@@@o%;:(.,'         \n";
    file << "`.. %@@@o%::;    \n";     
    file << "`)@@@o%::;    \n";     
    file << "%@@(o)::;    \n";    
    file << ".%@@@@%::;       \n";  
    file << ";%@@@@%::;.   \n";       
    file << ";%@@@@%%:;;;. \n";
    file << "...;%@@@@@%%:;;;;,..    \n";    file << "       .\n";


    std::cout << " XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX " << std::endl;

    file <<  "      .         \n";  
    file << ".              .              ;%     ;\n";   
    file << ",           ,                :;%  %\n";   
    file << ":         ;                   :;%;'    .,\n";   
    file << ",.        %;     %;            ;        %;'    ,;\n";
    file << ";       ;%;  %%;        ,     %;    ;%;    ,%'\n";
    file << "%;       %;%;      ,  ;       %;  ;%;   ,%;' \n";
    file << ";%;      %;        ;%;        % ;%;  ,%;'\n";
    file << "`%;.     ;%;     %;'         `;%%;.%;'\n";
    file << "`:;%.    ;%%. %@;        %; ;@%;%'\n";
    file << "`:%;.  :;bd%;          %;@%;'\n";
    file << "`@%:.  :;%.         ;@@%;'   \n";
    file << "`@%.  `;@%.      ;@@%;   \n";      
    file << "`@%%. `@%%    ;@@%;  \n";      
    file << ";@%. :@%%  %@@%;   \n";    
    file << "%@bd%%%bd%%:;   \n";  
    file << "#@%%%%%:;;\n";
    file << "%@@%%%::;\n";
    file << "%@@@%(o);  . '        \n"; 
    file << "%@@@o%;:(.,'         \n";
    file << "`.. %@@@o%::;    \n";     
    file << "`)@@@o%::;    \n";     
    file << "%@@(o)::;    \n";    
    file << ".%@@@@%::;       \n";  
    file << ";%@@@@%::;.   \n";       
    file << ";%@@@@%%:;;;. \n";
    file << "...;%@@@@@%%:;;;;,..    \n";
}
