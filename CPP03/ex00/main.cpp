/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:24:09 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/02 10:38:59 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap guy("Zoro");
	ClapTrap guy2("Mihawk");
	ClapTrap guy3;
	ClapTrap guy4("Pop");
	guy.attack("Enemy1");
	guy2.takeDamage(5);
	guy2.takeDamage(1);
	guy3 = guy4;  // Copy assignment
	guy3.beRepaired(10);

    guy.takeDamage(5);
    guy.beRepaired(1);
	guy3.attack("Enemy2");

	return (0);
}