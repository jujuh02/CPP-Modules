/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:23:01 by juhaamid          #+#    #+#             */
/*   Updated: 2024/01/16 13:53:32 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Brain::Brain(){
// 	std::cout << "Brain Constuctor Called" << std::endl;
// 	for (int i = 0; i < 100; i++)
// 		this->_ideas[i] = "Random ideas";
// }

// Brain::Brain(const Brain &other){
// 	for (int i = 0; i < 100; i++)
// 		this->_ideas[i] = other._ideas[i];
// }
// Brain &Brain::operator=(const Brain &other){
// 	if (this != &other)
// 	{
// 		for (int i = 0; i < 100; i++)
// 			this->_ideas[i] = other._ideas[i];
// 	}
// 	return (*this);
// }

// Brain::~Brain(){
// 	std::cout << "Brain Destructor Called"<< std::endl;
// }

Brain::Brain() {
    std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain& copy) {
    *this = copy;
    std::cout << "Brain has been copied." << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor." << std::endl;
}

Brain& Brain::operator=(const Brain& copy) {
    for (int i = 0; i < 100; i++) {
        this->_ideas[i] = copy._ideas[i];
    }
    std::cout << "Brain assigned." << std::endl;
    return (*this);
}