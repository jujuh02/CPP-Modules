/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:23:06 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/30 10:31:53 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap("random", 100, 50, 20)
{
	std::cout << "Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : name()