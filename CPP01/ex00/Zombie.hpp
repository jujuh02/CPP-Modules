/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:46:34 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/18 16:45:17 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string.h>

class Zombie
{
private :
			std::string name;
public :
	Zombie(std::string name);
	~Zombie();
			void announce(void) const;

};

			void randomChump(std::string name);
			Zombie* newZombie(std::string name);

#endif
