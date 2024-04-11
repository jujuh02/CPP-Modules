/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 08:22:36 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/08 13:20:39 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	isNum(std::string str)
{
	if (!str.empty())
	{
		if (str.find_first_not_of("0123456789") == std::string::npos
			|| (str.find_first_not_of("-0123456789") == std::string::npos && str[0] == '-'))
		{
			if (str.find('-', 1) == std::string::npos)
			return (true);
		}
	}
	return(false);
}

bool	isDouble(std::string str)
{
	if (!str.empty())
	{
		if (str.find_first_not_of("0123456789.") == std::string::npos
			|| (str.find_first_not_of("-0123456789.") == std::string::npos && str[0] == '-'))
		{
			if (str.find('-', 1) == std::string::npos
				&& str.find('.', str.find('.', 0) + 1) == std::string::npos)
			return (true);
		}
	}
	return(false);
}

bool	isFloat(std::string str)
{
	if (!str.empty())
	{
		if (str.find_first_not_of("0123456789.f") == std::string::npos
			|| (str.find_first_not_of("-0123456789.f") == std::string::npos && str[0] == '-'))
		{
			if (str.find('-', 1) == std::string::npos
				&& str.find('.', str.find('.', 0) + 1) == std::string::npos
				&& str.find('f', str.find('f', 0) + 1) == std::string::npos)
			return (true);
		}
	}
	return(false);
}

bool	isChar(std::string str)
{
	if (str.length() == 1)
		return (true);
	else if ((str == "nan" || str == "+inf" || str == "-inf"))
		return (true);
	else if ((str == "nanf" || str == "+inff" || str == "-inff"))
		return (true);
	return (false);
}

bool	isConvert(std::string str)
{
	if (isNum(str) || isDouble(str) || isFloat(str) || isChar(str))
		return (true);
	return (false);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		if (av[1][0] && isConvert(av[1]))
		{
			ScalarConverter::convert(av[1]);
			return (0);
		}
		std::cout << "Invalid argument" << std::endl;
		return (1);
	}
	else
		std::cout << "Wrong number of arguments " << std::endl;
	return (1);
}