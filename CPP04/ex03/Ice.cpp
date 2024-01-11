/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:23:18 by juhaamid          #+#    #+#             */
/*   Updated: 2024/01/09 09:04:09 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{
	std::cout << "Ice constructed" << std::endl;
}

Ice::Ice(const Ice &other):AMateria(other)
{
	std::cout << "Ice copy constructor called" <<std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor Called" << std::endl;
}
Ice &Ice::operator=(const Ice &other)
{
	std::cout << "Ice copy assignment operator = " << std::endl;
	if(this != &other)
		type=other.getType();
	return(*this);
}

void Ice::use(ICharacter &target)
{
	(void) target;
	 std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const{
	return new Ice(*this);
}