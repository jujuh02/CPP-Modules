/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 08:39:17 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/03 12:30:08 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Dog *dogs = new Dog[5];
	for (int i = 0; i < 5; i++)
		dogs[i].makeSound();
	delete[] dogs;
	// Animal test;  //Shouldnt work 
}
