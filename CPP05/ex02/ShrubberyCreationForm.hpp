/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:35:05 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/04 20:18:46 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include <string>
#include <fstream>

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
			void	doAction()const;
	class fileException : public std::exception
	{
		public:
				virtual const char *what() const throw();
	};
};



#endif