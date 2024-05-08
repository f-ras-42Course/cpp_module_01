/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/08 14:49:06 by fras          #+#    #+#                 */
/*   Updated: 2024/05/08 17:36:29 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	type_ = type;
	std::cout << "Constructor called for " << type_ << "! \n";
}

Weapon::~Weapon()
{
	std::cout << "Deconstructor called for " << type_ << "! \n";
}

const std::string& Weapon::getType()
{
	return type_;
}

void Weapon::setType(std::string type)
{
	type_ = type;
}
