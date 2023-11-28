/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:05:47 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/27 13:45:59 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string.h>
#include <cmath>

class Fixed
{
private:
		int val;
		static const int bit = 8;
public:
		Fixed();
		Fixed(const int n);
		Fixed (const float fl);
		~Fixed();
		Fixed(const Fixed &b);
		Fixed &operator = (const Fixed &b);
		int getRawBits(void) const;
		void setRawBits(int const bitt);
		float toFloat(void) const;
		int	toInt(void) const;
		
};
std::ostream &operator << (std::ostream &object, const Fixed fix);


#endif