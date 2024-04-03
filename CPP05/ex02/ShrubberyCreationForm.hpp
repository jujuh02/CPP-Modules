/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:35:05 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/02 14:39:22 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include <string>

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
			std::string target;
	public:
			ShrubberyCreationForm();
			ShrubberyCreationForm(const std::string target);
			ShrubberyCreationForm(const ShrubberyCreationForm &s);
			ShrubberyCreationForm &operator=(const ShrubberyCreationForm &s);
			~ShrubberyCreationForm();
	class fileException : public std::exception
	{
		public:
				virtual const char *what() const throw();
	};
};



#endif