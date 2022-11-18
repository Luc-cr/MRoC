#include "HTML/html.cc"


int main()
{
    HTML::loadFile("HTML/example.html");
    return HTML::parseCode();
}