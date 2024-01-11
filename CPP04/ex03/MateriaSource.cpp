/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:34:46 by juhaamid          #+#    #+#             */
/*   Updated: 2024/01/10 14:07:15 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Constructer" << std::endl;
	this->count = 0;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < this->count; i++)
		if (this->m[i])
			delete(this->m[i]);
	this->count= other.count;
	for (int i = 0; i < this->count; i++)
		this->equip(other.m[i]->clone());
	std::cout << "MateriaSource copy created!" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	for (int i = 0; i < this->count; i++)
		if (this->m[i])
			delete (this->m[i]);

	this->count = other.count;
	for (int i = 0; i < this->count; i++)
		this->equip(other.m[i]->clone());
	std::cout << "MateriaSource copy assignment-ed!" << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < this->count; i++)
		if (this->m[i])
			delete (this->m[i]);
	std::cout << "MateriaSource Destructed rip" << std::endl;
}


