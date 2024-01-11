/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:34:46 by juhaamid          #+#    #+#             */
/*   Updated: 2024/01/11 13:41:18 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Constructer" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	this->count= other.count;
	for (int i = 0; i < this->count; i++)
		this->copym[i] = other.copym[i]->clone();
	std::cout << "MateriaSource copy created!" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{	
	if (this != &other){
		this->count = other.count;
		for (int i = 0; i < this->count; i++)
			this->copym[i] = other.copym[i]->clone();
	}
	std::cout << "MateriaSource copy assignment!" << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < this->count; i++)
		if (this->copym[i])
			delete (this->copym[i]);
	std::cout << "MateriaSource Destructed rip" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m) {
	if (count < 4) {
            copym[count++] = m->clone();
	}
}

AMateria *MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < this->count; i++)
		if (this->copym[i]->getType() == type)
			return (this->copym[i]->clone());
	return (0);
}
