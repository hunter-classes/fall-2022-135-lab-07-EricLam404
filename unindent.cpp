#include <iostream>
#include "unindent.h"

std::string removeLeadingSpaces(std::string line){
    while(isspace(line[0])){
        line.erase(0, 1);
    }
    return line;
}