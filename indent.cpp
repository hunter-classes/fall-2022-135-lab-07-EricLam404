/*
Below is the code/work for all the functions.
*/
#include <iostream>
#include "indent.h"

//counts the amount of times a specific char is in a string
int countChar(std::string line, char c){
    int count = 0;
    for(int i = 0; i < line.length(); i++){
        if(line[i] == c){
            count++;
        }
    }
    return count;
}
//personal func that add indents for however many times the param states
std::string repeatIndent(int times){
    std::string str = "";
    for(int i = 0; i < times; i++){
        str += "\t";
    }
    return str;
}
//code that reads bracks and indents based on that
std::string addIndent(std::string line){
    static int openBrackets = 0;
    static int closedBrackets = 0;
    closedBrackets += countChar(line, '}');
    int total = openBrackets - closedBrackets;
    openBrackets += countChar(line, '{');

    return repeatIndent(total) + line;
}
