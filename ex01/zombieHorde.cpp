/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:07:39 by akuburas          #+#    #+#             */
/*   Updated: 2024/08/04 19:25:54 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	try {
		Zombie *zombies = new Zombie[N];
		for (int i = 0; i < N; i++)
			zombies[i].setName(name);
		return (zombies);
	}
	catch (std::bad_alloc &e) {
		std::cerr << e.what() << std::endl;
		return (NULL);
	}
}