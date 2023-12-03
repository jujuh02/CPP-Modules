/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 07:58:57 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/03 12:55:54 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main() {
	Animal* objects[10];
	// Create and fill the array of Animal objects with Dogs
	for (int d = 0; d < 5; d++){
		objects[d] = new Dog();
	}

	// Create and fill the array of Animal objects with Cats
	std::cout << std::endl;
	for (int d = 5; d < 10; d++)
	{
		objects[d] = new Cat();
	}

	// Delete every Animal
	std::cout << std::endl;
	for (int d = 0; d < 10; d++)
		delete objects[d];

	// Create and delete a Dog and a Cat using base class pointers
	std::cout << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

    // Create and delete a Dog and a deep copy of the Dog
	std::cout << "\n DEEP COPY TEST" << std::endl;
    std::cout << std::endl;
    Dog* test = new Dog();
    Dog* deep = new Dog(*test);
	std::cout<< "Mem of test " << &test << std::endl;
	std::cout<< "Mem of deep " << &deep << std::endl;
    delete test;
    delete deep;

    return 0;
}
