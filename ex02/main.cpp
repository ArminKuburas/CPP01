/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:32:07 by akuburas          #+#    #+#             */
/*   Updated: 2024/08/04 19:35:39 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "\"HI THIS IS BRAIN\"";
	std::string* ptr = &str;
	std::string& ref = str;

	std::cout << "Address of the string variable: " << &str << std::endl;
	std::cout << "Address of the string pointer: " << &ptr << std::endl;
	std::cout << "Address of the string reference: " << &ref << std::endl;
	std::cout << "The value of the string variable: " << str << std::endl;
	std::cout << "The value pointed to by the string pointer: " << *ptr << std::endl;
	std::cout << "The value pointed to by the string reference: " << ref << std::endl;
	return (0);
	
}