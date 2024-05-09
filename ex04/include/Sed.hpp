/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 10:20:22 by fras          #+#    #+#                 */
/*   Updated: 2024/05/09 21:58:01 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>
# include <string>

class Sed
{
	private:
		std::ifstream inputfile_;
		std::string line_;
		std::string	filecontents_;
	public:
		Sed(const std::string filename);
	    ~Sed();
		// void setFileContents(std::string filecontents);
};

void guardArgumentCount(int argc);

#endif