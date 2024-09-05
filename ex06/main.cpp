/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:26:22 by akuburas          #+#    #+#             */
/*   Updated: 2024/09/05 15:46:05 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./harlFilter <log level>" << std::endl;
		return (1);
	}
	Harl harl;
	std::string level = argv[1];

	harl.complain(level);
	return(0);
}