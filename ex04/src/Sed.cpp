/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 10:20:26 by fras          #+#    #+#                 */
/*   Updated: 2024/05/09 17:40:50 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(int argc, const std::string filename)
: myfile_(filename)
{
	std::cout << "Constructor called for " << filename << "! \n";
	if (argc != 4)
	{
		throw std::invalid_argument("invalid number of arguments");
	}
	if (!myfile_.is_open())
	{
		throw \
			std::invalid_argument("can't read " + filename + ": No such file");
	}
	std::cout << "succesfully opened\n" << std::endl;
}

Sed::~Sed()
{
	std::cout << "Deconstructor called! \n";
}


// const std::string& Sed::getFilename()
// {
// 	return (filename_);
// }
