/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:05:33 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/29 08:31:35 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bit = 8;

Fixed::Fixed() : val(0){
}

Fixed::Fixed(const int n){
	this->setRawBits(n << this->bit);
	// std::cout << "INT constructer called";
}

Fixed::Fixed(const float fl){
	this->val = roundf(fl * (1 << this->bit));
}

Fixed::Fixed(const Fixed &b){
	*this = b;
}

Fixed::~Fixed(){
}

Fixed &Fixed::operator = (const Fixed &b){
	if (this != &b){
		this->val = b.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits(void)const{
	return (this->val);
}

void Fixed::setRawBits(int const raw){
	this->val = raw;
}

float Fixed::toFloat(void) const{
	return ((float)this->getRawBits() / (1 << bit));
}

int Fixed::toInt(void) const{
	return(roundf(this->getRawBits() >> bit));
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

float Fixed::operator+(Fixed fix) const{
	return (this->toFloat() + fix.toFloat());
}

float Fixed::operator-(Fixed fix)const{
	return (this->toFloat() - fix.toFloat());
}

float Fixed::operator*(Fixed fix)const{
	return (this->toFloat() * fix.toFloat());
}

float Fixed::operator/(Fixed fix)const{
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

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.val > b.val)
		return a;
	else
		return b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b){
	if (a.val > b.val)
		return a;
	else
		return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
	if (a.val < b.val)
		return a;
	else
		return b;
}


Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.val < b.val)
		return a;
	else
		return b;
}


std::ostream &operator << (std::ostream &object, const Fixed &fix){
	object << fix.toFloat();
	return (object);
}

// set raw bits is the same as basically val = whatever the input is
// we have to make operator overloads because we wll  be using user defined classes