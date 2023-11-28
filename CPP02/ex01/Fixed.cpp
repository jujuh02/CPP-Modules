/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:05:33 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/28 16:35:21 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : val(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n){
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(n << this->bit);
}

Fixed::Fixed(const float fl){
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(fl * (1 << this->bit));
}

Fixed::Fixed(const Fixed &b) : val(b.getRawBits()){
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator = (const Fixed &b){
	std::cout << "Copy assignment constructor called" << std::endl;
	if (this != &b){
		this->val = b.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructer called" << std::endl;
}
int Fixed::getRawBits(void)const{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->val);
}

void Fixed::setRawBits(int const raw){
	// std::cout << "setRawBits member function called" << std::endl; 
	this->val = raw;
}

float Fixed::toFloat(void) const{
	return ((float)this->getRawBits() /(1 << this->bit));
}

int Fixed::toInt(void) const{
	return(roundf(this->getRawBits() >> this->bit));
}

std::ostream &operator << (std::ostream &object, const Fixed &fix){
	object << fix.toFloat();
	return (object);
}

