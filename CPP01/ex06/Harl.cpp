/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:14:18 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/28 10:23:01 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
}

Harl::~Harl(){
	
}
void	Harl::debug(void){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese ";
	std::cout << "-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put";
	std::cout << " enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

// add an array of functions

void	Harl::complain(std::string level){
	
	int i = 4;
	int idx = 0;
	
	std::string _list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void(Harl::*fnction[4])()= {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	for(i = 0; i < 4; i++)
		if (level == _list[i]){
			idx = i;
			break;
		}
	switch (i)
	{
		case 0:
			for (int i = idx; i < 4; i++)
				(this->*(fnction[i]))();
			break;
		case 1:
			for (int i = idx; i < 4; i++)
				(this->*(fnction[i]))();
			break;
		case 2:
			for (int i = idx; i < 4; i++)
				(this->*(fnction[i]))();
			break;
		case 3:
			for (int i = idx; i < 4; i++)
				(this->*(fnction[i]))();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
