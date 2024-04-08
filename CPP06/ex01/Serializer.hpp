/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 16:49:29 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/07 18:12:13 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
# define SERIALIZER_H

#include <iostream>
# include<string>
# include<cstdlib>
# include<climits>
# include<stdint.h>
#include "Data.hpp"

class Serializer
{
	private: 
			Serializer();
			Serializer(const Serializer &other);
			Serializer &operator=(const Serializer &other);
	public:
			~Serializer();
			static uintptr_t serialize(Data *ptr);
			static Data *deserialize(uintptr_t raw);
			
};

#endif