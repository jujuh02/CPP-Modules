/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:08:18 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/08 09:00:26 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data data;
	data.data_title = "IDK";
	data.number = 129;
	
	uintptr_t serializedValue = Serializer::serialize(&data);
	
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "serializedValue  : " << serializedValue << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	
	Data *deserializedValue = Serializer::deserialize(serializedValue);

	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "&data            : " << &data << std::endl;
	std::cout << "deserializeValue : " << deserializedValue << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << deserializedValue->data_title << " + " << deserializedValue->number << " = " << "nono" <<  std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	return (0);
}