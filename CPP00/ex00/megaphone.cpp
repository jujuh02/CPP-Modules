/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:05:57 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/02 14:37:02 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int ac, char **av)
{
	if (ac >= 2)
	{
		for (int i = 1; av[i]; i++)
		{
			for(int j = 0; av[i][j]; j++)
			{
				if(isalpha(av[i][j]))
					std::cout << (char)toupper(av[i][j]);
				else
					std::cout << av[i][j];
			}
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}