/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/08 13:42:07 by fras          #+#    #+#                 */
/*   Updated: 2024/05/08 14:44:32 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string brain;
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;
	
	brain = "HI THIS IS BRAIN";
	std::cout << "———————————————————————————————————————\n";
	std::cout << "&brain		|" << &brain << "\n";
	std::cout << "stringPTR	|" << stringPTR << "\n";
	std::cout << "&stringREF	|"  << &stringREF << "\n";
	std::cout << "———————————————————————————————————————\n";
	std::cout << "brain		|" << brain << "\n";
	std::cout << "*stringPTR	|" << *stringPTR << "\n";
	std::cout << "stringREF	|"  << stringREF << "\n";
	std::cout << "———————————————————————————————————————\n";
	return 0;
}

