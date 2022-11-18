#include "html.h"


bool HTML::loadFile(std::string directory)
{
    file.open(directory);
    if(!file.is_open()) return 1;

    while(file) rawContent += file.get();

    return 0;
}

bool HTML::parseCode(std::string code)
{
    
    return 0;
}