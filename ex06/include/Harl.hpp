/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/14 18:51:28 by fras          #+#    #+#                 */
/*   Updated: 2024/05/15 20:47:56 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
private:
	enum What
	{
		DEBUG,
		INFO,
		WARNING,
		ERROR
	};
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	void complain(What level);
	void setStatus(std::string level);
};

#endif