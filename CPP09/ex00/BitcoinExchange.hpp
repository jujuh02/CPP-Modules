/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:08:42 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/13 21:05:36 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

#include <map>
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>


class BitcoinExchange {
	private:
		std::map< std::string, float > _data;

	public:
		BitcoinExchange( );
		BitcoinExchange( BitcoinExchange const &copy );
		BitcoinExchange &operator=( BitcoinExchange const &copy );
		~BitcoinExchange();

		void push( std::string const date, std::string const price );
		void pop( std::string const date );
		float calculatePrice( std::string date, float amount );
};

bool validDate( std::string const date );
bool validPrice( std::string const price );

#endif

