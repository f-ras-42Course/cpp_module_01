/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/14 18:51:26 by fras          #+#    #+#                 */
/*   Updated: 2024/05/15 21:17:10 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout <<
			"[ DEBUG ]\n"
			"I love having extra bacon for my "
			"7XL-double-cheese-triple-pickle-special- ketchup burger.\n"
			"I really do!\n\n";
}

void Harl::info(void)
{
	std::cout <<
			"[ INFO ]\n"
			"I cannot believe adding extra bacon costs more money.\n"
			"You didn't put enough bacon in my burger!\n"
			"If you did, I wouldn't be asking for more!\n\n";
}

void Harl::warning(void)
{
	std::cout <<
			"[ WARNING ]\n"
			"I think I deserve to have some extra bacon for free.\n"
			"I've been coming for years whereas you started working here since "
			"last month.\n\n";
}

void Harl::error(void)
{
	std::cout <<
			"[ ERROR ]\n"
			"This is unacceptable, I want to speak to the manager now.\n\n";
}

void Harl::nothing(void)
{
	std::cout << "[ Probably complaining about insignificant problem ] \n";
}


void Harl::setStatus(std::string level)
{
	if (level == "DEBUG")
	{
		what_ = DEBUG;
	}
	if (level == "INFO")
	{
		what_ = INFO;
	}
	if (level == "WARNING")
	{
		what_ = WARNING;
	}
	if (level == "ERROR")
	{
		what_ = ERROR;
	}
}

void Harl::complain()
{
	switch (what_)
	{
		default:
			nothing();
			break;
		case DEBUG:
			debug();
		case INFO:
			info();
		case WARNING:
			warning();
		case ERROR:
			error();
	}
	return ;
}
