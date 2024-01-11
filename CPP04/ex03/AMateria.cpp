/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:02:39 by juhaamid          #+#    #+#             */
/*   Updated: 2024/01/09 09:03:57 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria::AMateria()
{
	std::cout << "Default AMateria Constructor Called";
}
AMateria::AMateria(const AMateria &other)
{
	std::cout << "AMateria Copy Constructor Called";
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other){
		type=other.getType();
	}
	return (*this);
}

std::string const &AMateria::getType()const
{
	return this->type;
}

void AMateria::use(ICharacter &target) {
	(void) target;
	std::cout << "* AMateria generic action done at " << this->getType() << " *" << std::endl;
}
