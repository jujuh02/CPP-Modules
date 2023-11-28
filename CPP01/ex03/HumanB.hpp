/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:59:28 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/27 15:52:46 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"
#include <iostream>
#include <string.h>

class HumanB
{
private:
		std::string name;
		Weapon *weapon;
public:
		HumanB(std::string name);
		~HumanB();
		void attack()const;
		void setWeapon(Weapon &weapon);
};


#endif