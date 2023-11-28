/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:56:11 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/27 14:05:10 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie has been created" << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << this->name << " :BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::~Zombie()
{
	std::cout << "Zombie has been destroyed" << std::endl;
}
void Zombie::setName(std::string name)
{
	this->name = name;
}