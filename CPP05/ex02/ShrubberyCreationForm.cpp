/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:35:08 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/02 19:06:17 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Default", 145, 137)
{
	std::cout << "Default Shrubbery Form created" << std::endl;
	
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): AForm(target, 145, 137)
{
	std::cout << "Shrubbery Form " << target << "created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s): AForm(s)
{

}

ShrubberyCreationForm::&

ShrubberyCreationForm::~ShrubberyCreationForm()
{
		
}
