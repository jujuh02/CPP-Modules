/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:23:01 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/03 11:35:06 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain Constuctor Called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Random ideas";
}

Brain::Brain(const Brain &other){
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}
Brain &Brain::operator=(const Brain &other){
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain(){
	std::cout << "Brain Destructor Called"<< std::endl;
}