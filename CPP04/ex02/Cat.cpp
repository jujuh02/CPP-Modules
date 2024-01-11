/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 07:30:39 by juhaamid          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/01/08 16:31:20 by juhaamid         ###   ########.fr       */
=======
/*   Updated: 2023/12/03 12:27:00 by juhaamid         ###   ########.fr       */
>>>>>>> da27a79b6515a28d297c65b4979b27c7ba512e9f
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat ():Animal("Cat")
{
	this->brain = new Brain();
	std::cout << "Cat default constructor --- with brain" << std::endl;

}
Cat::Cat (const Cat &other):Animal(other)
{
	this->brain = new Brain(*other.brain);
	std::cout << "Cat copy constructor called with a seperate brain" << std::endl;
}
Cat::~Cat ()
{
	delete this->brain;
	std::cout << "Cat destructor called + its brain is deleted" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator = " << std::endl;
	if(this != &other){
		type=other.getType();
		this->brain = other.brain;
		
	}
	return(*this);
}
void Cat::makeSound() const
{
	std::cout << "Cat Goes: MeOw MeOw!!" << std::endl;
}