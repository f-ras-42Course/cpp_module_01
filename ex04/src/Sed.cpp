/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 10:20:26 by fras          #+#    #+#                 */
/*   Updated: 2024/05/09 21:58:01 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

# define TEST 

Sed::Sed(const std::string filename)
: inputfile_(filename)
{
	std::cout << "Constructor called for " << filename << "! \n";
	if (!inputfile_.is_open())
	{
		throw \
			std::invalid_argument("can't read " + filename + ": No such file");
	}
	while (getline(inputfile_, line_))
	{
		filecontents_ += line_ + '\n';
	}
	std::cout << "filecontents were:\n" << filecontents_ << std::endl;
}

Sed::~Sed()
{
	std::cout << "Deconstructor called!\n";
}
