/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 07:28:42 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/03 07:27:08 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat :public Animal
{
	private:
		const Brain *brain;
	public:
    	Cat ();
    	Cat (const Cat &other);
    	~Cat ();
		Cat& operator=(const Cat &other);
		void makeSound() const;

};


#endif