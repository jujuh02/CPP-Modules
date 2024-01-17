/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 07:30:39 by juhaamid          #+#    #+#             */
/*   Updated: 2024/01/17 07:44:16 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat ():Animal("cat")
{
	brain = new Brain();
	std::cout << "Cat default constructor --- with brain" << std::endl;

}
Cat::Cat (const Cat &other):Animal(other)
{
	brain = new Brain(*other.brain);
	std::cout << "Cat copy constructor called with a seperate brain" << std::endl;
}
Cat::~Cat ()
{
	delete brain;
	std::cout << "Cat destructor called + its brain is deleted" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator = " << std::endl;
	if(this != &other){
		type=other.getType();
		*brain = *other.brain;
		
	}
	return(*this);
}
void Cat::makeSound() const
{
	std::cout << "Cat Goes: MeOw MeOw!!" << std::endl;
}

Brain* Cat::getBrain() const {
	return brain;
}