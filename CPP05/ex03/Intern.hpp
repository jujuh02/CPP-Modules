/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:00:06 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/05 13:49:36 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
# include <exception>

class AForm;

class Intern
{
	
			public:
			Intern();
			Intern(const std::string target);
			Intern(const Intern &s);
			Intern &operator=(const Intern &s);
			~Intern();

			AForm *makeShrub(const std::string target);
			AForm *makeRobotomy(const std::string target);
			AForm *makePresidential(const std::string target);
			AForm *makeForm(const std::string form_name, const std::string form_target);
			 typedef AForm *(Intern::*form)(std::string);
};
#endif