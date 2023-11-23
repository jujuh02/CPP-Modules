/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:12:13 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/21 12:11:13 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"
#include <iostream>
#include <string.h>

class HumanA{

private: 
		std::string name;
		Weapon &weapon;
public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack();
	
};


#endif