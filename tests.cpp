#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "unindent.h"
#include "indent.h"

// add your tests here
TEST_CASE("Remove leading spaces"){
    CHECK(removeLeadingSpaces("       int x = 1;  ") == "int x = 1;  ");
}
