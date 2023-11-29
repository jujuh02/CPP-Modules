/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:05:33 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/29 07:52:00 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bit = 8;

Fixed::Fixed() : val(0){
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &b){
	std::cout << "Copy constructor called" << std::endl;
	*this = b;
}

Fixed::~Fixed(){
	std::cout << "Destructer called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &b){
	std::cout << "Copy assignment constructor called" << std::endl;
	if (this != &b){
		this->val = b.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits(void)const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->val);
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl; 
	this->val = raw;
}
