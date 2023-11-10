/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:35:36 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/10 09:46:40 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

Phonebook::Phonebook()
{
	std::cout << "phonebook opened" << std::endl ;
}

Phonebook::~Phonebook()
{
	std::cout << "phonebook close" << std::endl ;
}
int Phonebook::num = 0;

void	Phonebook::display()
{
	std::cout << std::endl;
	std::cout << "+" << std::string(43, '-') << "+" <<std::endl;
	std::cout << "|" <<std::right << std::setw(10) << "Index"  << "|" << std::right << std::setw(10) << "First Name"  << "|"<< std::right <<  std::setw(10) << "Last Name" 
		<< "|" << std::setw(10) << "Nickname" << std::right << "|"<< std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout<< "|" << std::right << std::setw(10) << i + 1 << "|" << std::right << std::setw(10) << this->_contacts[i].get_first_name() << "|";
		std::cout << std::right <<  std::setw(10) << this->_contacts[i].get_last_name();
		std::cout<< "|" << std::setw(10) << this->_contacts[i].get_nickname() << "|" << std::endl;
	}
	std::cout << "+" << std::string(43, '-') << "+" <<std::endl;
}

void	Phonebook::search()
{
	this->display();
	std::cout << "-----------------Pick an Index---------------" << std::endl;
	
	
}

void	Phonebook::add()
{
	std::string ans;
	ans = "";
	if (this->num > 8)
	{
		std::cout << "Sorryy you can't have more friends";
		
	}
	while (!std::cin.eof() && ans == "")
	{
		std::cout << "Enter First Name pls" << std::endl;
		if (std::getline(std::cin >> std::ws, ans) && ans != "")
		{
			this->_contacts[this->num % 8].set_first_name(ans);
		}
	}
	ans = "";
	while(!std::cin.eof() && ans == "")
	{
		std::cout << "What's " << this->_contacts[this->num % 8].get_first_name() << "'s Last Name?" << std::endl;
		if (std::getline(std::cin, ans) && ans != "")
			this->_contacts[this->num % 8].set_last_name(ans);
	}
	ans = "";
	while (!std::cin.eof() && ans == "")
	{
		std::cout << "What's " << this->_contacts[this->num % 8].get_first_name() << "'s Nickname?" << std::endl;
		if (std::getline(std::cin >> std::ws, ans) && ans != "")
			this->_contacts[this->num % 8].set_nickname(ans);
	}
	ans = "";
	while (!std::cin.eof() && ans == "")
	{
		std::cout << "What's " << this->_contacts[this->num % 8].get_first_name() << "'s Phone Number?" << std::endl;
		if (std::getline(std::cin >> std::ws, ans) && ans != "")
			this->_contacts[this->num % 8].set_phone_number(ans);
	}
	ans = "";
	while (!std::cin.eof() && ans == "")
	{
		std::cout << "What's " << this->_contacts[this->num % 8].get_first_name() << "'s Darkest Secret?🙊" << std::endl;
		if (std::getline(std::cin >> std::ws, ans) && ans != "")
			this->_contacts[this->num % 8].set_darkest_secret(ans);
	}
	this->num++;
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
			pb.add();
			pb.start();
		}	
			
		else if (input == "SEARCH")
			pb.search();
		else if (input == "EXIT")
		{
			std::cout << "bye" << std::flush;
			check = false;
			return (0);
		}
	}
}