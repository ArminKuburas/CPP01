/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 12:55:51 by akuburas          #+#    #+#             */
/*   Updated: 2024/08/03 08:25:24 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
	
	Zombie* heapZombie = nullptr;
	
	try
	{
		heapZombie = newZombie("HeapZombie");
		heapZombie->announce();
	} catch (std::bad_alloc &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	randomChump("StackZombie");
	delete heapZombie;
	return (0);
}