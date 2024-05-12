/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fras <fras@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 10:22:58 by fras          #+#    #+#                 */
/*   Updated: 2024/05/12 08:58:24 by fras          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char *argv[])
{
	try
	{
		guardArgumentCount(argc);
		Sed sed(argv[1]);
		sed.replace(argv[2], argv[3]);
		sed.writeOutfile(std::string(argv[1]) + ".replace");
		std::cout << "Edit for '" << argv[1] <<
					"' succesfully written in: " << argv[1] << ".replace\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}
    return 0;
}
