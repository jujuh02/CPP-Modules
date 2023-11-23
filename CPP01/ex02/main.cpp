/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:24:01 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/20 10:25:25 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << "str: " << &str << std::endl;
	std::cout << "strPtr: " << stringPTR << std::endl;
	std::cout << "strRef: " << &stringREF << std::endl;
	std::cout << "val str: " << str << std::endl;
	std::cout << "val strPtr: " << *stringPTR << std::endl;
	std::cout << "val strRef: "  << stringREF << std::endl;
	
	return (0);
}