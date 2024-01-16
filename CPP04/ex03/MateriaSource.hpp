/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:35:03 by juhaamid          #+#    #+#             */
/*   Updated: 2024/01/15 09:23:21 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
	private: 
			AMateria *copyM[4];
			int count;
	public:
			MateriaSource();
			MateriaSource(const MateriaSource &other);
			MateriaSource &operator=(const MateriaSource &other); 
			~MateriaSource();
			virtual void	learnMateria(AMateria *);
			virtual AMateria *createMateria(std::string const &type);
	
};

#endif
