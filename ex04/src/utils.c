/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 12:22:47 by fras          #+#    #+#                 */
/*   Updated: 2024/05/09 12:23:09 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool	isValidArguments(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "error: invalid number of arguments\n";
		return false;
	}
}
