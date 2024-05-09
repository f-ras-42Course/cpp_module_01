/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   guardArgumentCount.cpp                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 18:42:59 by fras          #+#    #+#                 */
/*   Updated: 2024/05/09 19:49:52 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

void guardArgumentCount(int argc)
{
	if (argc != 4)
	{
		throw std::invalid_argument(\
			"invalid number of arguments: Must be three");
	}
}
