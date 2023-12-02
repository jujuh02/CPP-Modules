/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 07:46:21 by juhaamid          #+#    #+#             */
/*   Updated: 2023/12/02 07:54:20 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

protected:
			std::string type;
public:
		WrongCat();
		WrongCat(const WrongCat&other);
		~WrongCat(void);

		WrongCat &operator=(const WrongCat &other);

		std::string		getType(void) const;
		void			makeSound(void) const;
};

#endif