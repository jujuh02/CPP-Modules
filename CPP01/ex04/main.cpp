/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 08:23:12 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/23 09:55:56 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

void	searchAndReplace(const std::string &filename, const std::string &s1, const std::string &s2)
{
	std::string buff;
	// filename.append(".replace");
	std::ifstream infile(filename);
	if (!infile.is_open()){
		std::cerr << "unable to open filename" << std::endl;
		return ;
	}
	std::string outputFilename = filename + ".replace";
	std::ofstream outfile(outputFilename); 
	if (!outfile.is_open()){
		std::cerr << "error encountered while creating outfile" <<std::endl;
		infile.close();
		return ;
	}
	size_t count = 0;
	while (std::getline(infile, buff)){
		size_t pos = buff.find(s1, count);
		while (pos != std::string::npos){
			outfile << buff.substr(count, pos - count);
			outfile << s2;
			count = pos + s1.length();
			pos = buff.find(s1, count);
		}
		outfile << buff.substr(count) << '\n';
		count = 0;
	}
	std::cout << "Replacement completed. Output written to " << outputFilename << std::endl;

    infile.close();
    outfile.close();
}

int main (int ac, char **av)
{
	if (ac == 4)
	{
		std::string filename = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		searchAndReplace(filename, s1, s2);
		
	}
	else{
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}
 	return 0;
	
}
