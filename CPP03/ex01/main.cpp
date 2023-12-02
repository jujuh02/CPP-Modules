/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:21:53 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/02 11:04:33 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ScavTrap	p1("Apple");
	ScavTrap	p2("Dude");
	ScavTrap	p3("IDK");

	std::cout << "\nScavTrap Test\n";
	p1.attack("SOMEGUY");
	p2.takeDamage(7);
	p1.beRepaired(2);
	p2.attack("Tuc");
	p3.takeDamage(100);
	p1 = p2;
	p1.beRepaired(1);
	p1.attack("ENEMY");
	p3.attack("TEST0");
	p3.beRepaired(20);
	p3.guardGate();

	
	std::cout << "\nClapTrap Test\n";
	ClapTrap test("Test");
	test.attack("Rando");
	test.takeDamage(6);
	return (0);
}

// FIX ATTACK FUNCTION