/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 10:20:26 by fras          #+#    #+#                 */
/*   Updated: 2024/05/11 10:49:45 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

// Sed::Sed(const std::string filename, const std::string to_replace,\
// 		const std::string replace_with)
// : inputfile_(filename), to_replace_(to_replace), replace_with_(replace_with)
Sed::Sed(const std::string filename)
: inputfile_(filename)
{
	std::stringstream inputbuffer;
	
	std::cout << "Constructor called for " << filename << "! \n";
	if (!inputfile_.is_open())
	{
		throw \
			std::invalid_argument("can't read " + filename + ": No such file");
	}
	inputfile_ >> inputbuffer.rdbuf();
	filecontents_ = inputbuffer.str();
}

Sed::~Sed()
{
	std::cout << "Deconstructor called!\n";
}
