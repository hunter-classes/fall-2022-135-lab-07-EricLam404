/*
Code below takes in an input file in terminal directly.
It then cleans it using a simple algorithm (adding and removing indents).
*/
#include <iostream>
#include "unindent.h"
#include "indent.h"

int main(){
    std::cout << "removeLeadingSpaces(\"       int x = 1;  \")\n";
    std::cout << removeLeadingSpaces("       int x = 1;  ") << "\n";

    std::cout << "\n./main < bad-code.cpp\n";
    std::string s;
    std::string line;

    //print correct indents
    while(getline(std::cin, s)){
        line = removeLeadingSpaces(s);
        line = addIndent(line);
        std::cout << line << "\n";
        
    }
    return 1;
}