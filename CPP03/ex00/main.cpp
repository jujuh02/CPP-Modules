/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:24:09 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/29 16:22:44 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap guy("Zoro");
	ClapTrap guy2("Mihawk");
	guy.attack("Enemy1");
   guy2.takeDamage(10);
   guy2.takeDamage(1);
    // ClapTrap claptrap3 =guy2;  // Copy constructor
    // guy = guy2;  // Copy assignment

    guy.takeDamage(5);
    guy.beRepaired(2);
	// guy2.attack("Enemy2");
    // guy.beRepaired(2);
    // claptrap3.takeDamage(4);
    // claptrap3.beRepaired(2);
	return (0);
}