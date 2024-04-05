/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 10:22:07 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/05 10:24:05 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Default", 72, 45)
{
	std::cout << "Default Presidential Pardon Form created" << std::endl;
	
}
PresidentialPardonForm::PresidentialPardonForm(const std::string target): AForm(target, 72, 45)
{
	std::cout << "Presidential Pardon Form " << target << " created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &s): AForm(s)
{
	*this = s;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const	PresidentialPardonForm &s)
{
	target = s.target;
	setSign(s.getSigned());
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
		
}

void	PresidentialPardonForm::doAction()const{
	std::cout << getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;	
}