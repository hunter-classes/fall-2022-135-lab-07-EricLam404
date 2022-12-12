#include <iostream>
#include "indent.h"


int countChar(std::string line, char c){
    int count = 0;
    for(int i = 0; i < line.length(); i++){
        if(line[i] == c){
            count++;
        }
    }
    return count;
}

std::string repeatIndent(int times){
    std::string str = "";
    for(int i = 0; i < times; i++){
        str += "\t";
    }
    return str;
}

std::string addIndent(std::string line){
    static int openBrackets = 0;
    static int closedBrackets = 0;
    closedBrackets += countChar(line, '}');
    int total = openBrackets - closedBrackets;
    openBrackets += countChar(line, '{');

    return repeatIndent(total) + line;
}
