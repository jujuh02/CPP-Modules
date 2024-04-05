/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:00:03 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/05 15:13:44 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern &s)
{
	(void) s;
}

Intern &Intern::operator=(const Intern &s)
{
	(void) s;
	return (*this);
}

Intern::~Intern()
{

}

AForm *Intern::makeShrub(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeRobotomy(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm *Intern::makePresidential(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(const std::string form_name, const std::string form_target)
{
	int i = 0;
	std::string listforms[3] = {"shrubberycreationform", "robotomyrequestform", "presidentialpardonform"};
	form funcs[3] = {&Intern::makeShrub, &Intern::makeRobotomy, &Intern::makePresidential };
	while (i < 3)
	{
		if (form_name.compare(listforms[i]) == 0)
		{
			std::cout << "Intern created " << form_name << std::endl;
			return ((this->*funcs[i])(form_target));
		}
		i++;
	}
	throw std::exception();
	return 0;
}
