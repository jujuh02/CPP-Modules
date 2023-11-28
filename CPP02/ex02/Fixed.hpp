/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:05:47 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/28 16:35:02 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string.h>
#include <cmath>
#include <iomanip>

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
		void setRawBits(int const raw);
		float toFloat(void) const;
		int	toInt(void) const;
		bool operator>(const Fixed &fix);
		bool operator<(const Fixed &fix);
		bool operator>=(const Fixed &fix);
		bool operator<=(const Fixed &fix);
		bool operator==(const Fixed &fix);
		bool operator!=(const Fixed &fix);
		float operator+(const Fixed &fix);
		float operator-(const Fixed &fix);
		float operator*(const Fixed &fix);
		float operator/(const Fixed &fix);
		float operator++ ();
		float operator++ (int);
		float operator-- ();
		float operator-- (int);
};
std::ostream &operator << (std::ostream &object, const Fixed &fix);


#endif