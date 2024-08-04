/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:12:41 by akuburas          #+#    #+#             */
/*   Updated: 2024/08/04 19:26:48 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, const std::string name);

int	main(void)
{
	int N = 5;
	Zombie* horde = zombieHorde(N, "HordeZombie");

	if (horde == NULL)
		return (1);
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}