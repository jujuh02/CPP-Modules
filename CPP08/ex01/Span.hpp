/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 10:19:16 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/14 14:09:03 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H
#include <algorithm>
#include <vector>
#include <iostream>
#include <stdexcept>
#include <limits>

class Span
{
	private:
			unsigned int n;
			Span();
	public:
			std::vector<int> vect;
			Span(unsigned int N);
			Span(const Span &s);
			Span &operator=(const Span &s);
			~Span();
			void addNumber(int num);
			int shortestSpan() const;
			int longestSpan() const;
			void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
			
				
};

#endif