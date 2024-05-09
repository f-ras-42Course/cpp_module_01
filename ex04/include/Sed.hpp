/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 10:20:22 by fras          #+#    #+#                 */
/*   Updated: 2024/05/09 19:45:18 by fras          ########   odam.nl         */
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
		std::fstream myfile_;
	public:
		Sed(const std::string filename);
	    ~Sed();
		const std::string& getFilename();
};

void controlArgumentCount(int argc);

#endif