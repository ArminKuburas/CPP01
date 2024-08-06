/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:08:51 by akuburas          #+#    #+#             */
/*   Updated: 2024/08/06 11:54:15 by akuburas         ###   ########.fr       */
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
	std::ifstream file(this->_filename.c_str());
	if (!file.is_open())
		return ("");
	std::stringstream buffer;
	buffer << file.rdbuf();
	return (buffer.str());
}

bool FileReplacer::WriteFile(std::string& content)
{
	std::ofstream file((this->_filename + ".replace").c_str());
	if (!file.is_open())
		return (false);
	file << content;
	return (true);
}

std::string FileReplacer::Replace(std::string& content, const std::string& from, const std::string& to)
{
	if (from.empty())
		return (content);
	
	std::string result;
	size_t startPos = 0;
	size_t pos;
	while ((pos = content.find(from, startPos)) != std::string::npos)
	{
		result += content.substr(startPos, pos - startPos);
		result += to;
		startPos = pos + from.length();
	}
	result += content.substr(startPos);
	return (result);
}