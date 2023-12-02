/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:17:59 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/02 11:14:12 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
			ScavTrap();
			ScavTrap(const ScavTrap &a);
			ScavTrap(std::string name);
			ScavTrap &operator=(const ScavTrap &other);
			~ScavTrap();
			void attack(const std::string &target);
			void guardGate();
};

#endif

// private are only accessible from the base class ie claptrap
// protected can be accessed from the base and whatever the derived class is
