/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:35:36 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/07 16:56:14 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

Phonebook::Phonebook(/* args */)
{
}

Phonebook::~Phonebook()
{
}

void	Phonebook::add()
{
	std::getline(std::cin, )
}

void	Phonebook::start()
{
	std::cout << std::endl;

	std::cout << MAGENTA << "📞 WELCOME TO YOUR PHONEBOOK 📞" << std::endl;
	std::cout << std::endl;
	std::cout << "------------OPTIONS------------"<< std::endl;
	std::cout << " 1. ADD    " << std::endl;
	std::cout << " 2. SEARCH    " << std::endl;
	std::cout << " 3. EXIT    " << std::endl;
	
	std::cout << std::endl;


}

int main()
{
	Phonebook	pb;
	std::string	input;
	bool	check;
	check = true;
	
	pb.start();
	while (check)
	{
		std::cin >> input;
		if (input == "ADD")
		{
			// pb.add();
			std::cout << "hi" << std::endl;
		}
		else if (input == "EXIT")
		{
			std::cout << "bye" << std::flush;
			check = false;
			return (0);
		}
	}
}