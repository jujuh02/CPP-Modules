/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 07:46:21 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/03 12:13:28 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public:
		WrongCat();
		WrongCat(const WrongCat&other);
		~WrongCat(void);

		WrongCat &operator=(const WrongCat &other);

		std::string		getType(void) const;
		void			makeSound(void) const;
};

#endif