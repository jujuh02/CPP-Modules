/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:14:45 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/08 08:28:09 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <limits>
#include <cstdlib>
#include <iomanip>
#define RED "\033[0;31m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define GREEN "\033[0;32m"
#define RESET "\033[0m"

class ScalarConverter
{
private: 
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
public:
		virtual ~ScalarConverter();
		static void convert(std::string type);
		static void	toChar(std::string str);
		static void	toInt(std::string str);
		static void	toDouble(std::string str);
		static void	toFloat(std::string str);
		
		
		
};

#endif