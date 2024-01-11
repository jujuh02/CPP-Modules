/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 09:59:02 by juhaamid          #+#    #+#             */
/*   Updated: 2024/01/11 13:49:44 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

// int main()
// {
// IMateriaSource* src = new MateriaSource();
// src->learnMateria(new Ice());
// src->learnMateria(new Cure());
// ICharacter* me = new Character("me");
// AMateria* tmp;
// tmp = src->createMateria("ice");
// me->equip(tmp);
// tmp = src->createMateria("cure");
// me->equip(tmp);
// ICharacter* bob = new Character("bob");
// me->use(0, *bob);
// me->use(1, *bob);
// delete bob;
// delete me;
// delete src;
// return 0;
// }


int main() {
    // Create a Character
    Character player1("Player1");

    // Create Ice and Cure Materias
    Ice ice;
    Cure cure;

    // Equip Materias to the character
    player1.equip(&ice);
    player1.equip(&cure);

    // Use Materias
    std::cout << "Using Materias:" << std::endl;
    player1.use(0, player1); // Uses Ice Materia on the character
    player1.use(1, player1); // Uses Cure Materia on the character

    // Unequip Materias
    std::cout << "\nUnequipping Materias:" << std::endl;
    player1.unequip(0); // Unequips Ice Materia
    player1.unequip(1); // Unequips Cure Materia

    // Create a MateriaSource
    MateriaSource materiaSource;

    // Learn Materias
    std::cout << "\nLearning Materias:" << std::endl;
    materiaSource.learnMateria(&ice);
    materiaSource.learnMateria(&cure);

    // Create Materias using the MateriaSource
    std::cout << "\nCreating Materias using MateriaSource:" << std::endl;
    AMateria *newIce = materiaSource.createMateria("ice");
    AMateria *newCure = materiaSource.createMateria("cure");

    // Use the created Materias
    std::cout << "\nUsing Created Materias:" << std::endl;
    if (newIce) {
        player1.equip(newIce);
        player1.use(2, player1); // Uses newly created Ice Materia on the character
    }

    if (newCure) {
        player1.equip(newCure);
        player1.use(3, player1); // Uses newly created Cure Materia on the character
    }

    // Clean up
    delete newIce;
    delete newCure;

    return 0;
}


// int main()
// {
// 	Ice *bot = new Ice();
// 	Cure *heal = new Cure();
// 	AMateria *bot2 = bot->clone();
// 	AMateria *heal2 = new Cure();
// 	Character *c1 = new Character("Jason");
// 	Character *c2 = new Character("Percy");
// 	MateriaSource *m1 = new MateriaSource();
// 	MateriaSource *m2 = new MateriaSource();

// 	std::cout << std::endl << "AHHHHHHHHHHHHHHHHH" << std::endl;
// 	{
// 		Ice bot3;
// 		Ice bot4;
// 		Cure heal3;
// 		Cure heal4;
// 		Character c3;
// 		Character c4;
// 		MateriaSource m3;
// 		MateriaSource m4;
// 		c3.getName();
// 		c3.equip(heal2);
// 		c3.use(0, c4);
// 		c3.unequip(0);
// 	}
// 	std::cout << std::endl << "AHHHHHHHHHHHHHHHHH" << std::endl;
// 	c1->equip(bot);
// 	c1->use(0, *c2);
// 	c2->equip(bot2);
// 	c2->equip(heal);
// 	c2->unequip(1);
// 	std::cout << c2->getName() << std::endl;
// 	std::cout << c1->getName() << std::endl;
// 	m1->learnMateria(bot);
// 	m2->learnMateria(bot);
// 	m2->learnMateria(heal);
// 	AMateria *test = m2->createMateria("heal");


// 	// bot and bot2 not deleted here, deleted when c1 and c2 are deleted
// 	delete heal;
// 	delete heal2;
// 	delete c1;
// 	delete c2;
// 	delete test;
// }