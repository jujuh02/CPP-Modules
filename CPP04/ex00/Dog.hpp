/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 07:32:54 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/03 13:05:10 by juhaamid         ###   ########.fr       */
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
		Dog& operator=(const Dog &other);
    	~Dog ();
		void makeSound() const;

};
#endif