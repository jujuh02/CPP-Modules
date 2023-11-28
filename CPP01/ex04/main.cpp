/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 08:23:12 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/28 08:13:45 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

void	searchAndReplace(const std::string &filename, const std::string &s1, const std::string &s2)
{
	std::string buff;
	std::ifstream infile(filename);
	if (!infile.is_open()){
		std::cerr << "ERROR: Unable to open file" << std::endl;
		return ;
	}
	std::string outputFilename = filename + ".replace";
	std::ofstream outfile(outputFilename); 
	if (!outfile.is_open()){
		std::cerr << "ERROR: Creation of outfile failed" <<std::endl;
		infile.close();
		return ;
	}
	size_t curr = 0;
	while (std::getline(infile, buff)){
		size_t pos = buff.find(s1, curr);
		while (pos != std::string::npos){
			outfile << buff.substr(curr, pos - curr);
			outfile << s2;
			curr = pos + s1.length();
			pos = buff.find(s1, curr);
		}
		outfile << buff.substr(curr) << '\n';
		curr = 0;
	}
	std::cout << "Completed Replacement. Output written to " << outputFilename << std::endl;

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

// takes in three params (the file input and two strings to replace)
// the output file will be the of filename with .replace at the end
// npos is a big number in unsigned int .. used as a checker to find occurance
// chmod 327 to remove reading permissions