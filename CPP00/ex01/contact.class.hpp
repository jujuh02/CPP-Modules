/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 08:34:35 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/07 15:51:35 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>
#include <iostream>

class	Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	int		idx;

	

public:
	Contact();
	~Contact();
	// getters
	std::string get_first_name();
	std::string get_last_name();
	std::string get_nickname();
	std::string get_phone_number();
	std::string get_darkest_secret();
	// setters
	void set_first_name(std::string str);
	void set_last_name(std::string str);
	void set_nickname(std::string str);
	void set_phone_number(std::string str);
	void set_darkest_secret(std::string str);

};

#endif