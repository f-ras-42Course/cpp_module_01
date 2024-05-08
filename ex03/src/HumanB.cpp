/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/08 14:49:06 by fras          #+#    #+#                 */
/*   Updated: 2024/05/08 18:39:50 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	name_ = name;
	weapon_ = NULL;
	std::cout << "Constructor called for " << name_ << "! \n";
}

HumanB::~HumanB()
{
	std::cout << "Deconstructor called for " << name_ << "! \n";
}

void HumanB::setWeapon(Weapon& weapon)
{
	weapon_ = &weapon;
}

void HumanB::attack()
{
	if (weapon_ == NULL)
		std::cout << name_ << " attacks with their fists" << '\n';
	else
		std::cout << name_ << " attacks with their weapon " <<  weapon_->getType() << '\n';
}
