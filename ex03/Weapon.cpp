/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 20:11:38 by akuburas          #+#    #+#             */
/*   Updated: 2024/08/04 20:12:19 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : _type(type)
{
}

void Weapon::setType(const std::string& newType)
{
	this->_type = newType;
}

const std::string& Weapon::getType() const
{
	return (this->_type);
}