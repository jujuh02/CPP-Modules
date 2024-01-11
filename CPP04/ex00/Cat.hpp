/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 07:28:42 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/03 13:05:15 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat :public Animal
{
	public:
    	Cat ();
    	Cat (const Cat &other);
		Cat& operator=(const Cat &other);
    	~Cat ();
		void makeSound() const;

};


#endif