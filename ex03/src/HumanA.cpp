/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/08 14:49:06 by fras          #+#    #+#                 */
/*   Updated: 2024/05/08 19:07:06 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
: name_(name), weapon_(weapon)
{
	std::cout << "Constructor called for " << name_ << "! \n";
}

HumanA::~HumanA()
{
	std::cout << "Deconstructor called for " << name_ << "! \n";
}

void HumanA::attack()
{
	std::cout << name_ << " attacks with their weapon " <<  weapon_.getType() << '\n';
}
