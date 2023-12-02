/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 07:41:38 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/02 07:45:13 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::WrongAnimal(const std::string type) :type(type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}



WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal	& WrongAnimal::operator=(WrongAnimal const &other)
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "A sound that sounds Wrong????" << std::endl;
}