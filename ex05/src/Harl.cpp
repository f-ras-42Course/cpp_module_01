/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/14 18:51:26 by fras          #+#    #+#                 */
/*   Updated: 2024/05/18 16:01:18 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my "
			"7XL-double-cheese-triple-pickle-special- ketchup burger. "
			"I really do!\n";
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
			"You didn't put enough bacon in my burger! "
			"If you did, I wouldn't be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
			"I've been coming for years whereas you started working here since "
			"last month.\n";
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
	typedef void (Harl::*HarlMemFn)(void);
	
	HarlMemFn function;
	if (level != "DEBUG" && level != "INFO" && level != "WARNING" \
		&& level != "ERROR")
		return ;
	switch (level[0])
	{
		case 'D':
			function = &Harl::debug;
			break;
		case 'I':
			function = &Harl::info;
			break;
		case 'W':
			function = &Harl::warning;
			break;
		case 'E':
			function = &Harl::error;
			break;
		default:
			return;
	}
	(this->*function)();
}
