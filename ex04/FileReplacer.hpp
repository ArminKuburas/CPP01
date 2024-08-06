/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:03:49 by akuburas          #+#    #+#             */
/*   Updated: 2024/08/06 11:09:43 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
# define FILEREPLACER_HPP

#include <string>

class FileReplacer
{
	public:
		FileReplacer(std::string filename, std::string s1, std::string s2);
		bool ReplacementProcess(void);
	private:
		std::string _filename;
		std::string _s1;
		std::string _s2;
		std::string ReadFile(void);
		bool WriteFile(std::string& content);
		std::string Replace(std::string& content, const std::string& from, const std::string& to);
};

#endif