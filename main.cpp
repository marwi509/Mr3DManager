#include <iostream>
#include <GL/gl.h>
#include "include/FileReader.hpp"

using namespace std;

int main()
{
    std::string fileContents = FileReader::ReadFile(std::string("files/requirements"));
    cout << fileContents << endl;
    return 0;
}
