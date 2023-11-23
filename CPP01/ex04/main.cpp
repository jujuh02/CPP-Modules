/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 08:23:12 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/22 14:05:38 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

void	searchandreplace(const std::string &filename, const std::string &s1, const std::string &s2)
{
	std::string buff;
	int count;
	filename.append(".replace");
	std::ifstream infile(filename);
	if (!infile.is_open()){
		std::cerr << "unable to open filename" << std::endl;
		return ;
	}
	std::ofstream outfile(filename, ".replace"); 
	if (!outfile){
		std::cerr << "error encountered while creating outfile" <<std::endl;
		return ;
	}
	while (std::getline(infile, buff)){
		pos = buff.find(s1);
	}	
}

int main (int ac, char **av)
{
	if (ac == 4)
	{
		std::string filename = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		
	}
	else{
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}
 	return 0;
	
}