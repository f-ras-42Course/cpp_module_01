/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/14 18:51:24 by fras          #+#    #+#                 */
/*   Updated: 2024/05/15 20:49:45 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
	Harl harl;

	if (argc != 2)	
		return 0;
	harl.setStatus(argv[1]);
	// std::cout << "test\n" << argv[1] << '\n';
}
