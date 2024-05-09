/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/08 14:48:51 by fras          #+#    #+#                 */
/*   Updated: 2024/05/09 10:45:36 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string name_;
		Weapon& weapon_;

	public:
   		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void attack();
};

#endif