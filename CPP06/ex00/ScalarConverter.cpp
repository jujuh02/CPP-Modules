/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:14:19 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/07 12:33:00 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void) other;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void) other;
}

ScalarConverter::~ScalarConverter()
{
	
}

void ScalarConverter::convert(const std::string type)
{
	std::cout << type << std::endl;
}

bool ScalarConverter::isSpecialCase(const std::string &input)
{
	
}

void ScalarConverter::handleSpecialCase(const std::string &input)
{
	
}

char ScalarConverter::convertChar(const std::string &input)
{
	if (input.length() != 1)
		throw std::exception();
	return (input[0]);
	
}

int ScalarConverter::convertInt(const std::string &input)
{
	
	
}

float ScalarConverter::convertFloat(const std::string &input)
{
	
}

double ScalarConverter::convertDouble(const std::string &input)
{
	
}