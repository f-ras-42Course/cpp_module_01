/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 18:42:59 by fras          #+#    #+#                 */
/*   Updated: 2024/05/09 18:46:41 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void controlArgumentCount(int argc)
{
	if (argc != 4)
	{
		throw std::invalid_argument("invalid number of arguments");
	}
}
