/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:15:14 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/29 16:28:20 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : hit(10), energy(10), _attack(0){
	this->name = name;
	std::cout << this->name << " has joined the fight with " << std::endl;
	std::cout << this->hit << " Hit Points | " <<	this->energy << " Energy Points | " << this->_attack << " Attack Damage" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : name(other.name), hit(other.hit), energy(other.energy), _attack(other._attack)
{
	std::cout << "Copy Constructer Called" << std::endl;
}	
ClapTrap &ClapTrap::operator=(const ClapTrap &other){
	if (this != &other){
		this->name = other.name;
		this->hit = other.hit;
		this->energy = other.energy;
		this->_attack = other._attack;
	}
	return (*this);
}

ClapTrap::~ClapTrap(){
	// std::cout << this->name << " has died\n";
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

	if (this->hit > 0 && this->energy > 0 && (this->hit + amount) <= 10){
		this->hit += amount;
		this->energy--;
		std::cout << this->name <<"'s owwie went away, now they have " <<  this->energy << "energy points & " << this->hit << " hit points "<< std::endl;
	}
	else if (this->hit == 10)
		std::cout << this->name << " cant be healed because they are at full health" << std::endl;
	else if (this->hit == 0)
		std::cout << this->name << " cant be repaired..They have no hit points left" << std::endl;
	else if (this->energy == 0)
		std::cout << this->name << " cant be repaired..They have no energy points left" << std::endl;
	
}

void ClapTrap::attack(const std::string &target){
	if (this->hit > 0 && this->energy > 0){
		std::cout << this->name << " attacks " << target << std::endl;
		this->energy--;
		std::cout << this->name << " has "<< this->energy << " energy points left" << std::endl;
	}
	else if (this->hit == 0)
		std::cout << this->name << " can't attack because they dont have enough hit points" << std::endl;
	else
		std::cout << this->name << " can't attack because they dont have enough energy points" << std::endl;
}

