/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 07:32:54 by juhaamid          #+#    #+#             */
/*   Updated: 2024/01/17 07:42:35 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog :public Animal
{
	private:
		Brain *brain;
	public:
    	Dog ();
    	Dog (const Dog &other);
    	~Dog ();
		Dog& operator=(const Dog &other);
		void makeSound() const;
		Brain* getBrain() const;

};
#endif