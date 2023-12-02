/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:13:18 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/02 11:22:54 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main ()
{
    std::cout << "FragTrap test\n" <<std::endl;
	FragTrap guy("Zoro");
	FragTrap guy2("Mihawk");
	guy.attack("Enemy1");
	guy2.highFivesGuys();
	guy2.takeDamage(30);
	guy2.takeDamage(20);
	guy.beRepaired(1);
	guy.highFivesGuys();
    guy2 = guy;

    std::cout << "\nScavTrapTest\n"<< std::endl;
    ScavTrap Scav("Apple");  
    Scav.attack("some guy");
    Scav.takeDamage(40);
    Scav.beRepaired(2);
    Scav.guardGate();

    std::cout << "\nClapTrap Test\n" << std::endl;
    ClapTrap p11;
    ClapTrap a("Pew");
    p11.attack("sos");
    p11.takeDamage(10);
    p11.takeDamage(10);
    a.attack("idk");
	return (0);
}