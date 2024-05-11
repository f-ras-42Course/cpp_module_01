/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 10:20:26 by fras          #+#    #+#                 */
/*   Updated: 2024/05/11 18:23:44 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(const std::string& filename)
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

void Sed::replace(const std::string& to_change, const std::string& substitude)
{	
	size_t pos = filecontents_.find(to_change);

	while ((pos != std::string::npos))
	{
		filecontents_.erase(pos, to_change.length());
		filecontents_.insert(pos, substitude);
		pos = filecontents_.find(to_change);
	}
}
