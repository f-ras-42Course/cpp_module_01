/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/04 14:47:09 by fras          #+#    #+#                 */
/*   Updated: 2024/05/09 10:47:06 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string	name_;
	public:
   		Zombie();
		~Zombie();
		void setName(std::string name);
		void announce();
};

Zombie* zombieHorde(int N, std::string name);

#endif