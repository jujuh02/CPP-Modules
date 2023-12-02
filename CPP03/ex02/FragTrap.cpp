/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:33:40 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/02 06:06:35 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() :ClapTrap(){
	this->hit = 100;
	this->energy = 100;
	this->_attack = 30;
	std::cout << "FragTrap Default Constructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name) :ClapTrap(name){
	this->hit = 100;
	this->energy = 100;
	this->_attack = 30;
	std::cout << "FragTrap name Constructor Called---------- " << this->name << " has joined the fight" << std::endl;
}

FragTrap::FragTrap(const FragTrap &a):ClapTrap(a){
	std::cout << "FragTrap Copy Constructor Called" << std::endl;
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
	std::cout << "FragTrap Destructor for " << this->name << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap "<< this->name << ": let me give a high five " << std::endl;
}
