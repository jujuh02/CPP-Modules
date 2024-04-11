/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 08:37:57 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/08 14:13:54 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include "Identify.hpp"

Base *generate()
{
	srand(time(NULL));
	int num = rand() % 3;
	if (num == 0)
		return new A;
	else if (num == 1)
		return new B;
	else
		return new C;
}

void identify (Base *p) {
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "Type is A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "Type is B" << std::endl;
	else	
		std::cout << "Type is C" << std::endl;
}

void identify(Base &p) {
	Base tmp;
	
  try {
    tmp = dynamic_cast<A &>(p);
		(void) tmp;
    std::cout << "Type Class is A" << std::endl;
  } catch (std::exception &e) {
  }
  try {
    tmp = dynamic_cast<B &>(p);
		(void) tmp;
    std::cout << "Type Class  is B" << std::endl;
  } catch (std::exception &e) {
  }
  try {
    tmp = dynamic_cast<C &>(p);
		(void) tmp;
    std::cout << "Type Class is C" << std::endl;
  } catch (std::exception &e) {
  }
}