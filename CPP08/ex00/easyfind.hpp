/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 22:36:43 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/11 10:13:08 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H
#include<iterator>
#include <stdexcept>
#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &hi, int val)
{
	typename T::iterator thing = std::find(hi.begin(), hi.end(), val);
	if (thing == hi.end())
		throw std::exception();
	return thing;
}

#endif