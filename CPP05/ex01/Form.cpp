/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:22:30 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/02 08:49:07 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("default"), sign(false), signgrade(150), execgrade(150)
{
}

Form::Form(const std::string _name, const int sign_grade, const int exec_grade): name(_name), sign(false), signgrade(sign_grade), execgrade(exec_grade)
{
}
Form::Form(const Form &f): name(f.name), signgrade(f.signgrade), execgrade(f.execgrade)
{
	
}
Form &Form::operator=(const Form &f)
{
	if (this != &f){
	}
	return (*this);
}

Form::~Form()
{
}

const char *Form::GradeTooHighException::what() const throw()
{
    return("Grade is too High");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return("Grade is too Low");
}

void Form::beSigned(Bureaucrat &signer)
{
	if (sign)
	{
		std::cout << "Signatures can only be done once" << std::endl;
		return ;
	}
	if (signer.getGrade() <= signgrade)
		sign = true;
	else
		throw GradeTooLowException();
		
}

std::string Form::getName(void) const
{
    return (name);
}

int Form::getSignGrade(void)const
{
    return (signgrade);
}

int Form::getExecGrade(void)const
{
	return (execgrade);
}

bool Form::getSigned(void)const
{
	return (sign);
}

std::ostream &operator<<(std::ostream &os, const Form &f)
{
	os << "Name: " << f.getName() << " isSigned: " << f.getSigned() << " SignGrade: " << f.getSignGrade() << " ExecuteGrade: " << f.getExecGrade() << std::endl;
	return (os);
}