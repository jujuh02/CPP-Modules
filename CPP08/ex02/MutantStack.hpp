/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:06:03 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/13 15:07:41 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public :
			MutantStack<T>()
			{
				
			}
			MutantStack<T>(const MutantStack<T> &m)
			{
				*this = m;
			}
			MutantStack<T> &operator=(const MutantStack<T> &m)
			{
				if (this != &m ) {
					std::stack<T>::operator=(m);
				}
				return *this;
			}
			~MutantStack<T>()
			{
				
			}

			typedef typename std::stack<T>::container_type::iterator iterator;
			iterator begin(){
				return this->c.begin();
			}
			iterator end(){
				return(this->c.end());
			}
			
};



# endif