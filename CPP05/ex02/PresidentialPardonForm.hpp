/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 08:58:34 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/05 10:24:12 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "AForm.hpp"
#include <fstream>
class PresidentialPardonForm : public AForm
{
	

	private:
			std::string target;
	public:
			PresidentialPardonForm();
			PresidentialPardonForm(const std::string target);
			PresidentialPardonForm(const PresidentialPardonForm &s);
			PresidentialPardonForm &operator=(const PresidentialPardonForm &s);
			~PresidentialPardonForm();
			void	doAction()const;
};
#endif