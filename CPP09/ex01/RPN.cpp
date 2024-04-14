/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 21:04:39 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/14 17:05:53 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


RPN::RPN( void ) {
	
}

RPN::RPN( RPN const &r ) {
	*this = r;
}

RPN &RPN::operator=( RPN const &r ) {
	if (this != &r)
		sstack = r.sstack;
	return *this;
}

RPN::~RPN( ) {
	
}

void RPN::operation( std::string const &sign ) {
	if (sstack.size() < 2)
		throw std::runtime_error("Not enough values in stack");
	
	int num2 = sstack.top();
	sstack.pop();
	int num1 = sstack.top();
	sstack.pop();

	if (sign == "+")
		sstack.push(num1 + num2);
	else if (sign == "-")
		sstack.push(num1 - num2);
	else if (sign == "*")
		sstack.push(num1 * num2);
	else if (sign == "/") {
		if (num2 == 0)
			throw std::logic_error("Can't Divide by 0");
		sstack.push(num1 / num2);
	}
	else
		throw std::runtime_error("Operator Does Not Exist");
}

void RPN::calculate( std::string const &input ) {
	std::stringstream	ss(input);
	std::string			operat;

	while (std::getline(ss, operat, ' ')) {
		if (operat == "+" || operat == "-" || operat == "*" || operat == "/")
			operation(operat);
		else
			sstack.push(atoi(operat.c_str()));
	}
}

int RPN::result( void ) const {
	if (sstack.size() != 1)
		throw std::runtime_error("Invalid stack size");
	return sstack.top();
}