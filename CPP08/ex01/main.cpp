/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:06:13 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/14 11:39:02 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
int main()
{

    Span sp = Span(5);
    Span sp3 = Span(1000);


    sp.addNumber(6);
    sp.addNumber(3);
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

    Span sp2(50000);
	sp2.addNumber(3);
	std::vector<int> v(40000);
	sp2.addRange(v.begin(), v.end());
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
    std::cout << "size " << v.size() << std::endl;
    Span spp(1);
	std::cout << spp.longestSpan() << std::endl;
    

    return 0;

}