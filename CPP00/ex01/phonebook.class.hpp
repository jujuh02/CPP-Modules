/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:07:21 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/10 09:38:11 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include "contact.class.hpp"

#define MAGENTA "\033[35m" 

class Phonebook
{
private:
	Contact	_contacts[8];
	int static	num;
	
public:
	Phonebook();
	~Phonebook();

	void start();
	void add();
	void search();
	void display();
};

#endif