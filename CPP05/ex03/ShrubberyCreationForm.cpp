/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:35:08 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/05 14:32:56 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Default", 145, 137)
{
	std::cout << "Default Shrubbery Form created" << std::endl;
	
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): AForm(target, 145, 137)
{
	std::cout << "Shrubbery Form " << target << " created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s): AForm(s)
{
	*this = s;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const	ShrubberyCreationForm &s)
{
	setSign(s.getSigned());
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
		
}

void	ShrubberyCreationForm::doAction()const{
	std::ofstream out;
	out.open(((this->getName() + ("_shrubbery")).c_str()));
	if (out)
	{
		out << "			*			\n"; 
		out << "		   /.\\			\n";
		out << "		  /O..\\		\n";
		out << "		  /..O\\		\n";
		out << "		 /.o..O\\		\n";
		out << "		 /...O.\\		\n";
		out << "		/..O....\\		\n";
		out << "		^^^[_]^^^		\n";
	
		out.close();
	}
	else
		throw ShrubberyCreationForm::fileException();
	
}

const char *ShrubberyCreationForm::fileException::what() const throw()
{
	return ("File couldnt open and nothing could be written");
}