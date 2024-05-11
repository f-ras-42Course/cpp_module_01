/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 10:20:22 by fras          #+#    #+#                 */
/*   Updated: 2024/05/11 18:19:49 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <sstream>

class Sed
{
	private:
		std::ifstream	inputfile_;
		std::string		filecontents_;
	public:
		Sed(const std::string& filename);
	    ~Sed();
		void replace(const std::string& to_change, \
						const std::string& substitude);
};
void guardArgumentCount(int argc);

#endif