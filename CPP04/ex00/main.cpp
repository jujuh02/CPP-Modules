/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 07:58:57 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/03 12:08:53 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();
	animal->makeSound();

	std::cout << std::endl;
	const WrongAnimal* wronganimal = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();

	std::cout << std::endl;
	wrongcat->makeSound();
	wronganimal->makeSound();

	std::cout << std::endl;
	delete animal;
	delete dog;
	delete cat;
	delete wrongcat;
	delete wronganimal;
}