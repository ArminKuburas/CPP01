/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:08:51 by akuburas          #+#    #+#             */
/*   Updated: 2024/08/06 11:18:46 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"
#include <fstream>
#include <sstream>
#include <iostream>

FileReplacer::FileReplacer(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2)
{
}

bool FileReplacer::ReplacementProcess(void)
{
	std::string content = ReadFile();
	if (content.empty())
	{
		std::cerr << "Error reading file: " << this->_filename << std::endl;
		return (false);
	}
	std::string replaced = Replace(content, this->_s1, this->_s2);
	WriteFile(replaced);
	return (true);
}

std::string FileReplacer::ReadFile(void)
{
	std::ifstream file(this->_filename);
	if (!file.is_open())
		return ("");
	std::stringstream buffer;
	buffer << file.rdbuf();
	return (buffer.str());
}

bool FileReplacer::WriteFile(std::string& content)
{
	std::ofstream file(this->_filename + ".replace");
	if (!file.is_open())
		return (false);
	file << content;
	return (true);
}

std::string FileReplacer::Replace(std::string& content, const std::string& from, const std::string& to)
{
	size_t start_pos = 0;
	while ((start_pos = content.find(from, start_pos)) != std::string::npos)
	{
		content.replace(start_pos, from.length(), to);
		start_pos += to.length();
	}
	return (content);
}