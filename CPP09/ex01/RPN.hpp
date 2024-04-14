/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 20:08:06 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/14 11:11:47 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H

#include <string>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <stack>

class RPN {
	private:
		std::stack<int> sstack;

	public:
		RPN();
		RPN( RPN const &r);
		RPN &operator=( RPN const &r );
		~RPN();

		void operation( std::string const &sign );
		void calculate( std::string const &input );
		int result( void ) const;
};

#endif