/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 07:15:40 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/02 07:28:12 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(std::string type){
	std::cout << "Animal Constructor Called" << std::endl;
	this->type = type;	
}

Animal::Animal(const Animal &other){
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other){
	if (this != &other){
		type=other.getType();
	}
	return (*this);
}

Animal::~Animal(){
	std::cout << "Animal Destructor Called" << std::endl;
}

void Animal::makeSound()const{
	std::cout << "There's no sound lol" << std::endl;
}

std::string Animal::getType()const {
	return(this->type);
}