/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 08:13:32 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/05 14:56:43 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Default", 72, 45)
{
	std::cout << "Default Robotomy Request Form created" << std::endl;
	
}
RobotomyRequestForm::RobotomyRequestForm(const std::string target): AForm(target, 72, 45)
{
	std::cout << "Robotomy Form " << target << " created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &s): AForm(s)
{
	*this = s;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const	RobotomyRequestForm &s)
{
	setSign(s.getSigned());
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
		
}

void	RobotomyRequestForm::doAction()const{
	std::cout << "**drill drill drill bzzzzz**" << std::endl;
	std::cout << "**bzzz drill drill drill bzzzzz**" << std::endl;
	int num;
	srand(time(NULL));
	num = rand() % 2;
	if(num == 1)
		std::cout << "beep boop " << getName() << " robotomized successfully!" << std::endl;
	else
		throw RobotomyRequestForm::drillException();
	
}

const char *RobotomyRequestForm::drillException::what() const throw()
{
	return ("Robotomy failed womp womp :(")	;
}