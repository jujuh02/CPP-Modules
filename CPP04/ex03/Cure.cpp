/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:11:04 by juhaamid          #+#    #+#             */
/*   Updated: 2024/01/09 09:14:28 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
	std::cout << "Cure constructed" << std::endl;
}

Cure::Cure(const Cure &other):AMateria(other)
{
	std::cout << "Cure copy constructor called" <<std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor Called" << std::endl;
}
Cure &Cure::operator=(const Cure &other)
{
	std::cout << "Cure copy assignment operator = " << std::endl;
	if(this != &other)
		type=other.getType();
	return(*this);
}

void Cure::use(ICharacter &target)
{
	(void) target;
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria *Cure::clone() const{
	return new Cure(*this);
}