/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:23:06 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/02 06:09:49 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
	this->hit = 100;
	this->energy = 50;
	this->_attack = 20;

	std::cout << "Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	this->hit = 100;
	this->energy = 50;
	this->_attack = 20;
	std::cout << "ScavTrap: " << this->name << " constuctor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &a): ClapTrap(a){
	std::cout << "ScavTrap Copy Constructer Called" << std::endl;
	// *this = a;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap Destructor for " << this->name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other){
	if (this != &other){
		this->name = other.name;
		this->hit = other.hit;
		this->energy = other.energy;
		this->_attack = other._attack;
	}
	return (*this);

}

void ScavTrap::attack(const std::string &target) {
	this->energy--;
	std::cout << "ScavTrap " << this->name
			<< " attacks " << target
			<< ", causing " << this->_attack
			<< " points of damage!" << std::endl;
}

void ScavTrap::guardGate(){
	// std::cout << "guard smth idk what is supposed to be here" << std::endl;
	if (this->name.length() == 0)
		std::cout << "ScavTrap is now in Gate Keeper mode." << std::endl;
	else
		std::cout << "ScavTrap " << this->name << " is now in Gate Keeper mode." << std::endl;
}

