/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:46:40 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/20 13:57:39 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::get_type()
{
	return (this->type);
}
void Weapon::set_type(std::string type)
{
	this->type = type;
}

Weapon::Weapon(std::string type)
{
	this->set_type(type);
}