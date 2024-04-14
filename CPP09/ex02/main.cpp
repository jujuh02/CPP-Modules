/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:06:56 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/14 18:07:13 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac <= 2)
	{
		std::cout << "input needed, add some numbers" << std::endl;
	}
	else
	{
		
		PmergeMe help;
		try
    	{
			help.sortt(av);
		}
    	catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		return 0;
	}
	return 1;
}