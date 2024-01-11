/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:51:04 by juhaamid          #+#    #+#             */
/*   Updated: 2024/01/10 12:33:08 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character Constructer" << std::endl;
	this->name = "No name lol";
	this->count = 0;
}

Character::Character(std::string name):name(name)
{
	std::cout << "Character with name Constructor" << std::endl;
	this->count = 0;
}

Character::Character(Character &other)
{
	for (int i = 0; i < this->count; i++)
		if (this->m[i])
			delete(this->m[i]);
	this->count= other.count;
	for (int i = 0; i < this->count; i++)
		this->equip(other.m[i]->clone());
	std::cout << "Character copy created!" << std::endl;
}

Character &Character::operator=(const Character &other)
{
	for (int i = 0; i < this->count; i++)
		if (this->m[i])
			delete (this->m[i]);

	this->count = other.count;
	for (int i = 0; i < this->count; i++)
		this->equip(other.m[i]->clone());
	std::cout << "Character copy assignment-ed!" << std::endl;
	return (*this);
}

Character::~Character()
{
	for(int i = 0; i < this->count; i++)
		if (this->m[i])
			delete (this->m[i]);
	std::cout << "Character Destructed rip" << std::endl;
}


std::string const &Character::getName() const {
	return (this->name);
}

void	Character::equip(AMateria *m)
{
	if (this->count == 4)
		return ;
	this->m[this->count++] = m;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= this->count)
		return ;
	this->m[idx] = NULL;
	for (int i = idx; i < this->count - 1; i++)
		this->m[i] = this->m[i + 1];
}
void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4)
		this->m[idx]->use(target);
}