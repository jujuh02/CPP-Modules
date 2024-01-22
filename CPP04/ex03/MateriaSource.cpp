/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:34:46 by juhaamid          #+#    #+#             */
/*   Updated: 2024/01/22 08:23:03 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : count(0)
{
    for (size_t i = 0; i < 4; i++)
    {
        copyM[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &old) : count(old.count)
{
    for (size_t i = 0; i < 4; i++)
    {
        delete copyM[i];
        copyM[i] = old.copyM[i];
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
    if (&rhs == this)
    {
        return (*this);
    }
    count = rhs.count;
    for (size_t i = 0; i < 4; i++)
    {
        delete copyM[i];
        copyM[i] = rhs.copyM[i];
    }
    return (*this);
}

MateriaSource::~MateriaSource(void)
{
    for (size_t i = 0; i < 4; i++)
    {
        delete copyM[i];
    }
}

void MateriaSource::learnMateria(AMateria *materia)
{
    if (count < 4)
    {
        delete copyM[count];
        copyM[count] = materia;
		std::cout << "Materia : " << copyM[count]->getType() << " Learned " << std::endl;
        count++;
    }
    else
    {
        count = 0;
        delete copyM[count];
        copyM[count] = materia;
    }
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (copyM[i]->getType() == type)
        {
            return (copyM[i]->clone());
        }
    }
	return (0);
}