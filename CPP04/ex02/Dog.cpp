/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 07:34:17 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/03 09:08:58 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog ():Animal("Dog")
{
	this->brain = new Brain();
	std::cout << "Dog default constructor Called --- with brain" << std::endl;

}
Dog::Dog (const Dog &other):Animal(other)
{
	this->brain = new Brain(*other.brain);
	std::cout << "Dog copy constructor called with a seperate brain" << std::endl;
}
Dog::~Dog ()
{
	delete this->brain;
	std::cout << "Dog destructor called + we destroyed its brain" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
	if(this != &other){
		type=other.getType();
		this->brain = other.brain;
		
	}
	return(*this);
}
void Dog::makeSound() const
{
	std::cout << "Dog Goes:: WOOF WOOF!!" << std::endl;
}