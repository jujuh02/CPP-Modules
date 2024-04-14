/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:33:34 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/14 11:12:42 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main( int ac, char **av ) {
	if (ac != 2) {
		std::cerr << "uh oh !! Try: ./RPN [input]" << std::endl;
		return 1;
	}

	try {
		RPN calc;
		calc.calculate(av[1]);
		std::cout << calc.result() << std::endl;
	}
	catch (std::exception const &e) {
		std::cerr << "Error: " << e.what() << std::endl;
		return 1;
	}

	return 0;
}