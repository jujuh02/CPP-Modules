/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:19:21 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/20 08:59:55 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zoms = zombieHorde(5, "pizza");
	if (!zoms)
		return 0;
	for (int i = 0; i < 5; i++)
	{
		zoms[i].announce();
	}
	delete[] zoms;
}