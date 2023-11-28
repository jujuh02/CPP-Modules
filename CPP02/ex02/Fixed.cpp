/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:05:33 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/28 16:34:45 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : val(0){
}

Fixed::Fixed(const int n){
	this->setRawBits(n << this->bit);
}

Fixed::Fixed(const float fl){
	this->setRawBits(fl * (1 << this->bit));
}

Fixed::Fixed(const Fixed &b) : val(b.getRawBits()){
}

Fixed &Fixed::operator = (const Fixed &b){
	if (this != &b){
		this->val = b.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed(){
}
int Fixed::getRawBits(void)const{
	return (this->val);
}

void Fixed::setRawBits(int const raw){
	this->val = raw;
}

float Fixed::toFloat(void) const{
	return ((float)this->getRawBits() / (1 << this->bit));
}

int Fixed::toInt(void) const{
	return(roundf(this->getRawBits() >> this->bit));
}


bool Fixed::operator>(const Fixed &fix){
	return (this->toFloat() > fix.toFloat());
}

bool Fixed::operator<(const Fixed &fix){
	return (this->toFloat() < fix.toFloat());
}

bool Fixed::operator>=(const Fixed &fix){
	return (this->toFloat() >= fix.toFloat());
}

bool Fixed::operator<=(const Fixed &fix){
	return (this->toFloat() <= fix.toFloat());
}

bool Fixed::operator==(const Fixed &fix){
	return (this->toFloat() == fix.toFloat());
}

bool Fixed::operator!=(const Fixed &fix){
	return (this->toFloat() != fix.toFloat());
}

float Fixed::operator+(const Fixed &fix){
	return (this->toFloat() + fix.toFloat());
}

float Fixed::operator-(const Fixed &fix){
	return (this->toFloat() - fix.toFloat());
}

float Fixed::operator*(const Fixed &fix){
	return (this->toFloat() * fix.toFloat());
}

float Fixed::operator/(const Fixed &fix){
	return (this->toFloat() / fix.toFloat());
}

float Fixed::operator++ (){
	this->setRawBits(this->getRawBits() + 1);
	return (this->toFloat());
}

float Fixed::operator++ (int){
	float temp;
	temp = this->toFloat();
	this->setRawBits(this->getRawBits() + 1);
	return (temp);
}

float Fixed::operator-- (){
	this->setRawBits(this->getRawBits() - 1);
	return (this->toFloat());
}

float Fixed::operator-- (int){
	float temp;
	temp = this->toFloat();
	this->setRawBits(this->getRawBits() - 1);
	return (temp);
}



std::ostream &operator << (std::ostream &object, const Fixed &fix){
	object << fix.toFloat();
	return (object);
}
// we have to make operator overloads because we wll  be using user defined classes