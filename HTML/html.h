#pragma once
#include "iostream"
#include "fstream"
#include "vector"
#include "map"

namespace HTML
{
    std::string rawContent;
    std::ifstream file;

    bool loadFile(std::string directory);
    bool parseCode(std::string code = ""); // You can leave empty if you want to read the loaded file


}