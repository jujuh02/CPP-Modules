/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:11:47 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/24 13:50:46 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H
#include <iostream>
#include <string.h>
#include <functional>
#include <unordered_map>

class Harl
{
	private:
			void debug( void );
			void info( void );
			void warning( void );
			void error( void );
	public:
			Harl();
			~Harl();
			void complain( std::string level );
	
};

#endif