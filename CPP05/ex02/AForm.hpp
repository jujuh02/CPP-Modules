/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:22:20 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/02 15:57:15 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

#include <iostream>
#include <stdbool.h>
#include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
	private:
			const std::string name;
			_Bool	sign;
			const	int	signgrade;
			const	int execgrade;
	public:
			AForm();
			AForm(const AForm &f);
			AForm(const std::string name, const int signgrade, const int execgrade);
			AForm &operator=(const AForm &f);
			virtual ~AForm();
			void	beSigned(Bureaucrat &signer);
			//  getters
			std::string getName(void)const;
			int	getSignGrade(void)const;
			int 	getExecGrade(void)const;
			bool		getSigned(void)const;
			void	setSign(bool sign);
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
std::ostream &operator<<( std::ostream &os, const AForm &f);
#endif