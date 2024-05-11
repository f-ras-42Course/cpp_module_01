/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 10:20:26 by fras          #+#    #+#                 */
/*   Updated: 2024/05/11 23:04:29 by fras          ########   odam.nl         */
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
	inputfile_.close();
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

void Sed::writeOutfile(const std::string& filename)
{
	std::ofstream outputfile(filename);
	outputfile << filecontents_;
	outputfile.close();
}

const std::string& Sed::getFilecontents()
{
	return(filecontents_);
}