/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:41:43 by juhaamid          #+#    #+#             */
/*   Updated: 2024/01/09 09:04:32 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice:public AMateria
{
	Ice();
	Ice(const Ice &other);
	Ice &operator=(const Ice &other);
	~Ice();
	AMateria* clone() const;
	void use(ICharacter& target);

};

#endif