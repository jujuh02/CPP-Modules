/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 07:41:25 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/02 08:01:19 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>
class WrongAnimal
{
protected:
			std::string type;
public:
		WrongAnimal();
		WrongAnimal(const std::string type);
		WrongAnimal(const WrongAnimal&other);
		virtual ~WrongAnimal(void);

		WrongAnimal & operator=(const WrongAnimal &other);

		std::string		getType(void) const;
		void			makeSound(void) const;
};

#endif