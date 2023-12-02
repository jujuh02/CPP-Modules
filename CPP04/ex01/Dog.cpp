/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 07:34:17 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/02 07:34:52 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog ():Animal("Dog")
{
	std::cout << "Dog default constructor" << std::endl;

}
Dog::Dog (const Dog &other):Animal(other)
{

}
Dog::~Dog ()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator = " << std::endl;
	if(this != &other)
		type=other.getType();
	return(*this);
}
void Dog::makeSound() const
{
	std::cout << "bark!!" << std::endl;
}