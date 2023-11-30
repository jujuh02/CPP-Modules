/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:33:40 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/30 17:51:25 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() :ClapTrap(){
	this->hit = 100;
	this->energy = 100;
	this->_attack = 30;
	std::cout << "FragTrap Default Constructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name) :ClapTrap(name, 100, 100, 30){
	std::cout << "FragTrap name Constructor Called" << std::endl;
	std::cout << this->name << " has joined the fight" << std::endl;
}

FragTrap::FragTrap(const FragTrap &a){
	std::cout << "FragTrap Copy Constructor Called" << std::endl;
	*this = a;
}

FragTrap &FragTrap::operator=(const FragTrap &other){
	std::cout << "FragTrap Copy Assignment Operator Called" << std::endl;
	if (this != &other){
		this->name = other.name;
		this->hit = other.hit;
		this->energy = other.energy;
		this->_attack = other._attack;
	}
	return (*this);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor Called" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap "<< this->name << ": let me give a high five " << std::endl;
}
