/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:22:20 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/05 14:04:01 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <stdbool.h>
#include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
			const std::string name;
			bool	sign;
			const	int	signgrade;
			const	int execgrade;
	public:
			Form();
			Form(const Form &f);
			Form(const std::string name, const int signgrade, const int execgrade);
			Form &operator=(const Form &f);
			~Form();
			void	beSigned(Bureaucrat &signer);
			//  getters
			std::string getName(void)const;
			int	getSignGrade(void)const;
			int 	getExecGrade(void)const;
			bool		getSigned(void)const;
	class GradeTooHighException : public std::exception
	{
		public:
				virtual const char *what() const throw();

	};
		class GradeTooLowException : public std::exception
	{
		public:
				virtual const char *what() const throw();

	};


};
std::ostream &operator<<( std::ostream &os, const Form &f);
#endif