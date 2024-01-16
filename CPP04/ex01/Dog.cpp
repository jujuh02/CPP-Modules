/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 07:34:17 by juhaamid          #+#    #+#             */
/*   Updated: 2024/01/16 14:01:41 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog ():Animal("dog")
{
	brain = new Brain();
	std::cout << "Dog default constructor --- with brain" << std::endl;

}
Dog::Dog (const Dog &other):Animal(other)
{
	brain = new Brain(*other.brain);
	std::cout << "Dog copy constructor called with a seperate brain" << std::endl;
}
Dog::~Dog ()
{
	delete brain;
	std::cout << "Dog destructor called + its brain is deleted" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator = " << std::endl;
	if(this != &other){
		type=other.getType();
		*brain = *other.brain;
		
	}
	return(*this);
}
void Dog::makeSound() const
{
	std::cout << "Dog Goes: MeOw MeOw!!" << std::endl;
}

Brain* Dog::getBrain() const {
	return brain;
}