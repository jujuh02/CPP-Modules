/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:35:03 by juhaamid          #+#    #+#             */
/*   Updated: 2024/01/10 12:56:24 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private: 
			AMateria *copym[4];
			int count;
	public:
			MateriaSource();
			MateriaSource(const MateriaSource &other);
			MateriaSource &operator=(const MateriaSource &other); 
			void	learnMateria(AMateria *);
			AMateria *createMateria(std::string const &type);
	
};

#endif