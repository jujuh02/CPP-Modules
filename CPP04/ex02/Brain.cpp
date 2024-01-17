/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:23:01 by juhaamid          #+#    #+#             */
/*   Updated: 2024/01/17 07:43:51 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain& other) {
    std::cout << "Brain has been copied." << std::endl;
    *this = other;
}

Brain::~Brain() {
    std::cout << "Brain destructor." << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
    for (int i = 0; i < 100; i++) {
        this->_ideas[i] = other._ideas[i];
    }
    std::cout << "Brain assigned." << std::endl;
    return (*this);
}