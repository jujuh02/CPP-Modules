/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:02:39 by juhaamid          #+#    #+#             */
/*   Updated: 2024/01/11 09:32:21 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	this->type = type;
	std::cout << "AMateria Constructor Called" << std::endl;

}

AMateria::AMateria()
{
	std::cout << "Default AMateria Constructor Called" << std::endl;
}
AMateria::AMateria(const AMateria &other)
{
	std::cout << "AMateria Copy Constructor Called" << std::endl;
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other){
		type=other.getType();
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}

std::string const &AMateria::getType()const
{
	return this->type;
}

void AMateria::use(ICharacter &target) {
	(void) target;
	std::cout << "* AMateria generic action done at " << this->getType() << " *" << std::endl;
}
