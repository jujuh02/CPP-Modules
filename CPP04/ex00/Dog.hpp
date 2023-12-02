/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 07:32:54 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/02 07:34:06 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

class Dog :public Animal
{
	public:
    	Dog ();
    	Dog (const Dog &other);
    	~Dog ();
		Dog& operator=(const Dog &other);
		void makeSound() const;

};
#endif