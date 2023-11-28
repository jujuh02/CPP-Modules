/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:59:34 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/27 15:53:23 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
	
}
void	HumanA::attack()
{
	std::cout << this->name << " attacks with " << this->weapon.getType() << std::endl;
}
HumanA::~HumanA()
{
	std::cout << this->name << " died" << std::endl;
}