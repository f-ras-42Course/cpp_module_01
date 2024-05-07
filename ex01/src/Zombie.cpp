/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/04 14:24:10 by fras          #+#    #+#                 */
/*   Updated: 2024/05/07 19:53:09 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor called!\n";
}

Zombie::~Zombie()
{
	std::cout << "Deconstructor called for " << name_ << "! \n";
}

void Zombie::setName(std::string name)
{
	name_ = name;
}

void Zombie::announce()
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ...\n";
}
