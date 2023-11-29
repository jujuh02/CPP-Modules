/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:48:12 by juhaamid          #+#    #+#             */
/*   Updated: 2023/11/29 09:06:04 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main( void ) {
// 	Fixed a;
// 	Fixed const b( Fixed(5.05f) * Fixed( 2 ) );
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	return (0);
// }
int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << " is a at start" << std::endl;
	std::cout << ++a << " is a at ++a" << std::endl;
	std::cout << a << " is a after ++a" << std::endl;
	std::cout << a++ <<" is a before a++" << std::endl;
	std::cout << a << " is a after a+\n" << std::endl;
	std::cout << b << " is b" << std::endl;
	std::cout << Fixed::max(a, b) << " the max of a and b" << std::endl;
	std::cout << Fixed::min(a, b) << " the min of a and b" << std::endl;

	return 0;
}
// convert decimal to binary
// takes only 8 bits of precision so the binary number 
// then convert it back and cast to float or round the nu,