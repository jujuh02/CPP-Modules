/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:06:13 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/14 14:11:29 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
int main()
{

    Span sp = Span(5);
    Span sp3 = Span(1000);


    sp.addNumber(6);
    sp.addNumber(5);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(12);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    try
    {
	    sp.addNumber(8);
    }
    catch (std::exception &e)
    {
	    std::cerr << e.what() << std::endl;
    }

    Span spp(10);


    spp.addNumber(1);
    spp.addNumber(10);
    spp.addNumber(40);
    std :: cout << "_________________" << std :: endl;

    std::cout << "spp nums" << std::endl;
    for(size_t i = 0 ; i < spp.vect.size(); i++)
    {
        std :: cout << spp.vect[i] << std :: endl;
    }
    std :: cout << "_________________" << std :: endl;
    std :: cout <<spp.shortestSpan() << std :: endl;
    std :: cout <<spp.longestSpan() << std :: endl;
}