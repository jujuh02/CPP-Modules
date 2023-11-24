/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:14:18 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/24 13:50:19 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
	std::cout << "hi" << std::endl;
}

void	Harl::debug(void){
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese ";
	std::cout << "-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void){
	std::cout << "INFO :I cannot believe adding extra bacon costs more money. You didn't put";
	std::cout << "enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void){
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I've been coming for";
	std::cout << "years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void){
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level){
		std::map<std::string, std::function<void()>> levelFunctions = {
			   {"DEBUG", std::bind(&Harl::debug, this)},
		};
	
}

Harl::~Harl(){
	
}