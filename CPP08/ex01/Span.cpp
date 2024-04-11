/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 10:56:52 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/11 11:25:59 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():n(){
	
}
Span::Span(unsigned int N): n(N), vect(0)
{
	
}

Span::Span(const Span &s)
{
	*this = s;
}

Span &Span::operator=(const Span &s)
{
	if (this == &s)
		return (*this);
	n = s.n;
	vect = s.vect;
	return (*this);
}

void	Span::addNumber(int num)
{
	if (vect.size() == n)	
		throw std::out_of_range("Vector is fuls");
	vect.push_back(num);
}

int Span::shortestSpan() const
{
	if (vect.size() < 2)
		throw std::out_of_range("Not enough elements");
	std::vector<int> temp = vect;
	sort(temp.begin(), temp.end());
}