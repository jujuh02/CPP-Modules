/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:13:18 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/30 17:13:56 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main ()
{
	FragTrap guy("Zoro");
	FragTrap guy2("Mihawk");
	guy.attack("Enemy1");
   guy2.takeDamage(10);
   guy2.takeDamage(1);
    // ScavTrap ScavTrap3 =guy2;  // Copy constructor
    guy = guy2;  // Copy assignment

    guy.takeDamage(5);
    guy.beRepaired(2);
	// guy.guardGate();
	guy2.attack("Enemy2");
    // guy.beRepaired(2);
    // ScavTrap3.takeDamage(4);
    // ScavTrap3.beRepaired(2);
	return (0);
}