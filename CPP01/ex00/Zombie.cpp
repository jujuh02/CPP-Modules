/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:56:11 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/13 15:48:27 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	name = this->_name;
	std::cout << name << "has been created" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ":BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::~Zombie()
{
	std::cout << this->_name << "has been destroyed" << std::endl;
}