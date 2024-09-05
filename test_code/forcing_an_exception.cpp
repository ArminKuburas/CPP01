/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forcing_an_exception.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:13:27 by akuburas          #+#    #+#             */
/*   Updated: 2024/09/05 11:18:03 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>

int	main(void)
{
	try
	{
		size_t size = std::numeric_limits<size_t>::max();
		int *hugeArray = new int[size];
		std::cout << "Alloc has happened" << std::endl;
		delete[] hugeArray;
		
	}
	catch (std::bad_alloc &e)
	{
		std::cerr << "Forced bad_alloc: " << e.what() <<std::endl;
	}
	return (0);
}