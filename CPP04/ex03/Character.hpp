/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhaamid <juhaamid@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:51:14 by juhaamid          #+#    #+#             */
/*   Updated: 2024/01/09 10:49:31 by juhaamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
		AMateria *m[4];
		std::string name;
		int count;
public:
		Character();
		Character(std::string name);
		Character(Character &other);
		Character &operator = (const Character &other);
		~Character();

		std::string const &getName() const;
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);
				
};

#endif