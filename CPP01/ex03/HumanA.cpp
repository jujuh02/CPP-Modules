/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:59:34 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/21 12:13:43 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
	
}
void	HumanA::attack()
{
	std::cout << this->name << " attacks with " << this->weapon.get_type() << std::endl;
}
HumanA::~HumanA()
{
	std::cout << this->name << " died" << std::endl;
}