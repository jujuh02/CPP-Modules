/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:44:35 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/09 18:26:06 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <iostream>
#include <cstddef>

template <typename T>
void iter(T *arr, size_t len, void (*f)(T&))
{
	for (size_t i = 0; i < len; i++)
	{
		f(arr[i]);
	}
}

#endif