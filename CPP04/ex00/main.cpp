/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 07:58:57 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/02 09:31:32 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main() {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();

//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;

//     i->makeSound(); // will output the cat sound!
//     j->makeSound();
//     meta->makeSound();

//     // Testing WrongCat
//     const WrongAnimal* wrongMeta = new WrongAnimal();
//     const WrongAnimal* wrongI = new WrongCat();

//     std::cout << wrongI->getType() << " " << std::endl;
//     wrongI->makeSound(); // will output the wrong animal sound!

//     delete meta;
//     delete j;
//     delete i;
//     delete wrongMeta;
//     delete wrongI;

//     return 0;
// }

int main()
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;
	std::cout << "Dog->getType [" << dog->getType() << "] " << std::endl;
	std::cout << "Cat->getType [" << cat->getType() << "] " << std::endl;
	cat->makeSound(); //will output the cat sound!
	dog->makeSound(); //will output the dog sound! 
	animal->makeSound(); //will output the animal sound

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