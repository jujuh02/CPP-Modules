/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 20:02:29 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/28 10:19:34 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl apple;
	if (ac == 2){
		apple.complain(av[1]);
	}
	else{
		std::cout << "Enter correct amount of arguments" << std::endl;
		return (-1);
	}
	return (0);
}