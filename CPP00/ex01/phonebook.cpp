/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:35:36 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/24 12:45:36 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "phoneBook opened" << std::endl ;
}

PhoneBook::~PhoneBook()
{
	std::cout << "phoneBook closed" << std::endl ;
}
int PhoneBook::num = 0;

std::string PhoneBook::fixlen(std::string str)
{
	if (str.size() >= 10){
		str.resize(9);
		str.append(".");
	}
    return str;
}

void	PhoneBook::display()
{
	std::cout << std::endl;
	std::cout << "+" << std::string(43, '-') << "+" <<std::endl;
	std::cout << "|" <<std::right << std::setw(10) << "Index"  << "|" << std::right << std::setw(10) << "First Name"  << "|"<< std::right <<  std::setw(10) << "Last Name" 
		<< "|" << std::setw(10) << "Nickname" << std::right << "|"<< std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout<< "|" << std::right << std::setw(10) << i + 1 << "|" << std::right << std::setw(10) << fixlen(this->_contacts[i].get_first_name());
		std::cout << "|" << std::right <<  std::setw(10) << fixlen(this->_contacts[i].get_last_name());
		std::cout<< "|" << std::setw(10) << fixlen(this->_contacts[i].get_nickname()) << "|" << std::endl;
	}
	std::cout << "+" << std::string(43, '-') << "+" <<std::endl;
}

void	PhoneBook::print(Contact info)
{
	std::string op;
	op = "";
	std::cout << std::endl;
	std::cout << "SEARCHING................." << std::endl;
	std::cout << std::endl;
	std::cout << "First Name: " << info.get_first_name() << std::endl;
	std::cout << "Last Name: " << info.get_last_name() << std::endl;
	std::cout<< "Nickname: " << info.get_nickname() << std::endl;
	std::cout << "Phone Number: " << info.get_phone_number() << std::endl;
	std::cout << "Dark Secret: " << info.get_darkest_secret() << std::endl;
	std::cout << std::endl;
	std::cout << "If you want to go back to the main menu press 0 or press 1 if you want to go back to the search menu" << std::endl;
	while (!std::cin.eof())
	{
		if (std::getline(std::cin, op) && (op != "" || op != "\n")){
			if (op == "0"){
				this->start();
				return ;
			}
			if (op == "1"){
				this->search();
				return ;
			}
			else if (op != "0" || op != "1" || op.length() == 0)
				std::cout << "Press" << std::endl;
				std::cout << "[0] to Main Menu" << std::endl;
				std::cout << "[1] to search again" << std::endl;
				
		}
		
	}
}

void	PhoneBook::search()
{
	std::string str;
	this->display();
	std::cout << "-----------------Enter an Index or 0 to go back---------------" << std::endl;
	while (!std::cin.eof())
	{
		if ((std::getline(std::cin, str) && str != "") || str.length() == 0)
		{
			if (str.size() == 1 && str[0] >= '1' && str[0] <= '8' && \
					this->_contacts[str[0] - 1 - '0'].get_first_name().size())
				break ;
			if (str.size() == 1 && str[0] == '0'){
				this->start();
				return ;
			}
			else if (str.length() == 0)
				std::cout << "Cannot be left empty!" << std::endl;
		}
		if (str != "" && str.length() != 0)
			std::cout << "Enter Correct Index!" << std::endl;
	}
		if (!std::cin.eof()){
			this->print(this->_contacts[str[0] - 1 - '0']);
			
		}
}

void	PhoneBook::add()
{
	std::string ans;
	ans = "";
	if (this->num > 8)
	{
		std::cout << "replacing first added contact" << std::endl;
        num = 0;	
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

void	PhoneBook::start()
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
	PhoneBook	pb;
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
			std::cout << "bye" << std::flush <<std::endl;
			check = false;
			return (0);
		}
		else if (input != "ADD" || input != "SEARCH"|| input != "EXIT")
			std::cout << "pls enter one of the available options" << std::endl;
	}
}