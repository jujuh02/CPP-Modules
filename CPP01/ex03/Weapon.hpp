/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:13:13 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/28 09:00:06 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string.h>

class Weapon
{
	private:
			std::string type;
	public:
		std::string const &getType()const;
		void setType(std::string type);	
		Weapon(std::string type);
};

#endif