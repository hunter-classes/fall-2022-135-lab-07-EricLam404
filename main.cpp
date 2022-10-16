#include <iostream>
#include "unindent.h"
#include "indent.h"

int main(){
    std::cout << removeLeadingSpaces("       int x = 1;  ") << "\n";

    std::string s;
    std::string line;
    while(getline(std::cin, s)){
        line = removeLeadingSpaces(s);
        line = addIndent(line);
        std::cout << line << "\n";
        
    }
    return 1;
}