/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:08:47 by akuburas          #+#    #+#             */
/*   Updated: 2024/08/06 11:49:37 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./replace [filename] [string1] [string2]" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string string1 = argv[2];
	std::string string2 = argv[3];

	FileReplacer replacer(filename, string1, string2);

	if (!replacer.ReplacementProcess())
		return (1);
	return (0);
}