/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 07:51:56 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/03 12:13:59 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat():WrongAnimal()
{
	std::cout << "WrongCat default constructor called\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other):WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat(void){
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &other)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this != &other)
	{
		type = other.type;
	}
	return (*this);
}

std::string	WrongCat::getType() const
{
	return (this->type);
}

void	WrongCat::makeSound() const
{
	std::cout << "*****WrongCat Sounds*****" << std::endl;
}