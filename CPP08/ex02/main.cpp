/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:06:13 by juhaamid          #+#    #+#             */
/*   Updated: 2024/04/14 11:25:30 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main()
{
 	{
        MutantStack<char> mstack;
        
        mstack.push('a');
        mstack.push('b');

        // Iterate over elements
        std::cout << "Iterating over elements:" << std::endl;
        for (MutantStack<char>::iterator i = mstack.begin(); i != mstack.end(); ++i) {
            std::cout << *i << std::endl;
        }

        // Pop and print top elements
        std::cout << "Popping and printing top elements:" << std::endl;
        for (size_t i = 0; i < 2; i++) {
            std::cout << mstack.top() << std::endl;
            mstack.pop();
        }

        if (mstack.empty()) {
            std::cout << "Stack is empty." << std::endl;
        } else {
            std::cout << "Stack is not empty." << std::endl;
        }
        mstack.push('c');
        mstack.push('d');
        mstack.push('e');
        std::cout << "Top element after pushing: " << mstack.top() << std::endl;
        std::cout << "Size of stack: " << mstack.size() << std::endl;
    }
		std::cout << "GIVEN MAIN" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "TOP: " <<  mstack.top() << std::endl;
		mstack.pop();
		std::cout << "SIZE: " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		return (0);
}