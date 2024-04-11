/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:56:40 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/11 11:06:24 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "iostream"
	template <typename T>
void printA(Array<T> &a) {
	for (unsigned int i = 0; i < a.size(); i++) {
		std::cout << a[i] << std::endl;
	}
	std::cout << "end of the a list" << std::endl;
}

int main ( void ) {
	Array<int> a(4);
	Array<int> b(3);
	Array<int> c;
	Array<int> *test = new Array<int>(5);
	printA(a);
	b[2] = 3;
	printA(b);
	try{
		b[7] = 3;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	printA(b);
	a[1] = 6;
	printA(*test);
	(*test)[2] = 20;
	printA(*test);
	 Array<std::string> strArray(3);
        strArray[0] = "Hello";
        strArray[1] = "world";
        strArray[2] = "!";

        // Printing the elements of string array
        std::cout << "String Array elements: ";
        for (unsigned int i = 0; i < strArray.size(); ++i) {
            std::cout << strArray[i] << " ";
        }
        std::cout << std::endl;
	return (0);

}