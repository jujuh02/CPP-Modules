/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:05:33 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/26 20:16:34 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : val(0){
	std::cout << "default constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "destructer called" << std::endl;
}
Fixed::Fixed(const Fixed &b) : val(b.getRawBits){
	std::cout << "copy constructor called" << std::endl;
}

Fixed &Fixed::operator = (const Fixed &b){
	std::cout << "copy assignment constructor called" << std::endl
	if (this != &b){
		this->val = val.getRawBits();
	}
	return (*this);
}

Fixed::getRawBits(void)const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->val);
}

Fixed::setRawBits(int const bitt){
	std::cout << "setRawBits member function called" << std::endl; 
	this->val = bitt
}
