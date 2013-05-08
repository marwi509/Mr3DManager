#include "../include/FileReader.hpp"
#include <iostream>
#include <fstream>
#include <string>

std::string FileReader::ReadFile(std::string filename)
{
    std::ifstream fileStream;
    std::string line;
    std::string result;
    fileStream.open(filename.c_str());

    while(fileStream.good())
    {
        getline(fileStream, line);
        result += line;
        result += '\n';
    }

    fileStream.close();
    return result;
}
