/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 08:33:24 by akuburas          #+#    #+#             */
/*   Updated: 2024/09/05 03:25:50 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string name, Weapon& weapon) : _name(name), _weapon(&weapon)
{
}

void HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with his " << (*this->_weapon).getType() << std::endl;
}
