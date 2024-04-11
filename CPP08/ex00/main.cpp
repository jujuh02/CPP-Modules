/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:55:46 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/11 10:15:23 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
		std::vector<int> apple; 
		apple.push_back(10);
		apple.push_back (23);
		apple.push_back(90);
		apple.push_back(1);
		apple.push_back(9);
		int	find = 1;
		std::vector<int>::iterator hi = easyfind(apple, find);
		std::cout << *hi << std::endl;
		try
		{
			std::vector<int>::iterator hi = easyfind(apple, 3);
			std::cout << *hi << std::endl;
			
		}
		catch(const std::exception& e)
		{
			std::cerr << "That value doesnt exist in this container :(" << std::endl;
		}
}