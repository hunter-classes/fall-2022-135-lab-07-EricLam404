#include <iostream>
#include "unindent.h"
//code to remove leading whitespaces, if there are any
std::string removeLeadingSpaces(std::string line){
    while(isspace(line[0])){
        line.erase(0, 1);
    }
    return line;
}