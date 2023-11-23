/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:13:13 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/21 12:07:54 by juhaamid         ###   ########.fr       */
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
		std::string get_type();
		void set_type(std::string type);	
		Weapon(std::string type);
};

#endif