/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/14 18:51:24 by fras          #+#    #+#                 */
/*   Updated: 2024/05/15 20:00:14 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int main()
{
	Harl harl;

	std::cout << "harl: "; harl.complain("DEBUG"); std::cout << '\n';
	std::cout << "harl: "; harl.complain("INFO"); std::cout << '\n';
	std::cout << "harl: "; harl.complain("WARNING"); std::cout << '\n';
	std::cout << "harl: "; harl.complain("ERROR"); std::cout << '\n';
	std::cout << "harl: "; harl.complain("UNKNOWN"); std::cout << '\n';
}
