/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:23:01 by juhaamid          #+#    #+#             */
/*   Updated: 2024/01/17 07:40:46 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain& copy) {
    std::cout << "Brain has been copied." << std::endl;
    *this = copy;
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