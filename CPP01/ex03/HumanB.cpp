/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:05:03 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/21 20:03:29 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	weapon = NULL;
}

HumanB::~HumanB()
{
	std::cout << this->name << " died" << std::endl;
}
void HumanB::set_weapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()const
{
	if(weapon){
 		std::cout << this->name	<< " attacks with " << this->weapon->get_type() << std::endl;
	}
	else{
		std::cout << this->name << " attacks with their hands" << std::endl;
	}
}