/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:15:14 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/02 11:26:28 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Default"), hit(10), energy(10), _attack(0){
	std::cout << "Clap Trap Default constructer called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): hit(10), energy(10), _attack(0){
	std::cout << "ClapTrap Constructor with name ";
	this->name = name;
	std::cout << this->name << " has joined the fight" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap Copy Constructer Called" << std::endl;
	*this = other;
}	
ClapTrap &ClapTrap::operator=(const ClapTrap &other){
	std::cout << "ClapTrap Copy Assignment Called" << std::endl;
	if (this != &other){
		this->name = other.name;
		this->hit = other.hit;
		this->energy = other.energy;
		this->_attack = other._attack;
	}
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap Destructor for " << this->name << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->hit > 0){
		this->hit -= amount;
		std::cout << this->name << " takes " << amount << " damage";
		std::cout << " & has " << this->hit << " hit points left" << std::endl;
	}
	else if (this->hit == 0)
		std::cout << this->name << " is dead bro let them rest in peace " << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount){

	if (this->hit > 0 && this->energy > 0 && this->hit + amount <= 10){
		this->hit += amount;
		this->energy--;
		std::cout << this->name <<"'s owwie went away, now they have " <<  this->energy << " energy points & " << this->hit << " hit points "<< std::endl;
	}
	else if (this->hit == 0)
		std::cout << this->name << " cant be repaired..They have no hit points left" << std::endl;
	else if (this->energy == 0)
		std::cout << this->name << " cant be repaired..They have no energy points left" << std::endl;
	
}

void ClapTrap::attack(const std::string &target){
	if (this->hit > 0 && this->energy > 0 ){
		std::cout << this->name << " attacks " << target << " causing " << this->_attack << " points of damage" << std::endl;
		this->energy--;
		std::cout << this->name << " has "<< this->energy << " energy points left" << std::endl;
	}
	else if (this->hit == 0)
		std::cout << this->name << " can't attack because they dont have enough hit points" << std::endl;
	else
		std::cout << this->name << " can't attack because they dont have enough energy points" << std::endl;
}

