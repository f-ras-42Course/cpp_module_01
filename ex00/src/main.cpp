/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 16:52:55 by fras          #+#    #+#                 */
/*   Updated: 2024/05/07 17:44:21 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
 
int	main()
{
	Zombie* kees;
	Zombie* karel;
	Zombie* pjotr;
	Zombie	philippe("Philippe");
	
	kees = newZombie("Kees");
	karel = newZombie("Karel");
	pjotr = newZombie("Pjotr");
	kees->announce();
	karel->announce();
	randomChump("Sofia");
	kees->announce();
	delete kees;
	delete karel;
	delete pjotr;
	return 0;
}
