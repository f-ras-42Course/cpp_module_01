/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 16:52:55 by fras          #+#    #+#                 */
/*   Updated: 2024/05/07 20:04:24 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define AMOUNT_OF_KARELS 10

int	main()
{
	Zombie* zombies;
	
	zombies = zombieHorde(AMOUNT_OF_KARELS, "karel");
	for (size_t i = 0; i < AMOUNT_OF_KARELS; i++)
	{
		zombies[i].announce();
	}
	zombies->announce();
	delete[] zombies;
	return 0;
}
