/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:23:06 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/30 17:18:41 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap("random", 100, 50, 20)
{
	std::cout << "Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20){
	std::cout << "ScavTrap Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &a){
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = a;
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

ScavTrap::~ScavTrap(){
	std::cout <<"ScavTrap Destructor Called" << std::endl;
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap is now in Gate Keeper Mode" << std::endl;
}