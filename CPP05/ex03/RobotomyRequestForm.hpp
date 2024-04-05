/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 08:13:54 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/05 14:33:01 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include <string>
#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
	public:
			RobotomyRequestForm();
			RobotomyRequestForm(const std::string target);
			RobotomyRequestForm(const RobotomyRequestForm &s);
			RobotomyRequestForm &operator=(const RobotomyRequestForm &s);
			~RobotomyRequestForm();
			void	doAction()const;
	class drillException : public std::exception
	{
		public:
				virtual const char *what() const throw();
	};
};


#endif