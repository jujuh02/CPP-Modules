/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 07:30:39 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/03 13:06:41 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat ():Animal("Cat")
{
	std::cout << "Cat default constructor" << std::endl;

}
Cat::Cat (const Cat &other):Animal(other)
{
	std::cout << "Cat Copy Constructr Called" << std::endl;
}
Cat::~Cat ()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator = " << std::endl;
	if(this != &other)
		type=other.getType();
	return(*this);
}
void Cat::makeSound() const
{
	std::cout << "Cat Goes: MEOWW!!" << std::endl;
}