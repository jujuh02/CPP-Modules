/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:21:53 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/02 00:18:59 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ScavTrap	p1("Apple");
	ScavTrap	p2("Dude");

	p2 = p1;
	ScavTrap	p3(p1);

	std::cout << "\np1 playing\n";
	p1.attack("Dude");
	p1.takeDamage(7);
	p1.beRepaired(2);
	p1.attack("Tuc");
	p1.takeDamage(33);
	p1.attack("Dude");
	p1.beRepaired(42);

	
	std::cout << "\np2 playing\n";
	p2.attack("Tac");

	p2.guardGate();
	p2.takeDamage(99);
	p2.beRepaired(66);
	p2.attack("p1");

	std::cout << "\np3 playing\n";
	p3.takeDamage(90);
	p3.beRepaired(90);
	p3.takeDamage(42);
	p3.beRepaired(42);
	return (0);
}

// FIX ATTACK FUNCTION