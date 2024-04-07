/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:14:45 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/07 12:10:25 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

class ScalarConverter
{
private: 
		ScalarConverter();
public:
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
		virtual ~ScalarConverter();
		static void convert(const std::string type);
		bool isSpecialCase(const std::string &input);
		void handleSpecialCase(const std::string &input);
		char convertChar(const std::string &input);
		int  convertInt(const std::string &input);
		float convertFloat(const std::string &input);
		double convertDouble(const std::string &input);
		
		
		
};

#endif