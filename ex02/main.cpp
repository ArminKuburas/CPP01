/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:32:07 by akuburas          #+#    #+#             */
/*   Updated: 2024/09/05 11:34:35 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "\"HI THIS IS BRAIN\"";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Address of the string variable: " << &str << std::endl;
	std::cout << "Address of the string pointer: " << &stringPTR << std::endl;
	std::cout << "Address of the string reference: " << &stringREF << std::endl;
	std::cout << "The value of the string variable: " << str << std::endl;
	std::cout << "The value pointed to by the string pointer: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by the string reference: " << stringREF << std::endl;
	return (0);
	
}