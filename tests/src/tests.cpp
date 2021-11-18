#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "sum.h"
#include "sumn.h"
#include "fib.h"
}

// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE ("sumtail") {
    // Add the tests for excercise 3 "sumtail" function here. Use "REQUIRE()" statement to check. 
    REQUIRE (sumtail (-20, 0) == -1); // Out of bounds
    REQUIRE (sumtail (1, 0) == 1);
    REQUIRE (sumtail (1, 0) == 1);
    REQUIRE (sumtail (6, 0) == 21); // sum(6) = 6+5+4+3+2+1+0 = 21 
    REQUIRE (sumtail (100, 0) == 5050);  // sum (100) = 100 + 99 + 98 +...+ 1 = 5050
}

TEST_CASE ("sumwhile") {
    // Add the tests for excercise 3 "sumwhile" function here. Use "REQUIRE()" statement to check. 
    REQUIRE (sumwhile (-20) == -1); // Out of bounds
    REQUIRE (sumwhile (0) == 0); 
    REQUIRE (sumwhile (1) == 1); 
    REQUIRE (sumwhile (6) == 21); // sum(6) = 6+5+4+3+2+1+0 = 21
    REQUIRE (sumwhile (100) == 5050);  // sum (100) = 100 + 99 + 98 +...+ 1 = 5050
}

TEST_CASE("sumn")
{
    REQUIRE (sumn (0) == -1); // Out of bounds
    REQUIRE (sumn (1) == 1); // sum(1) must be 1
    REQUIRE (sumn (3) == 9); //sum(3) = 1+3+5 = 9
    REQUIRE (sumn (33) == 1089); //sum(33) = 1+3+5+...+65 = 1089
}

TEST_CASE("fib")
{
   // Add the tests for excercise 4 "fib" function here. Use "REQUIRE()" statement to check. 
    REQUIRE (fib (0, 0, 1) == -1); // Out of bounds
    REQUIRE (fib (1, 0, 1) == 0); // First number
    REQUIRE (fib (5, 0, 1) == 3); // 5'th == 3
    REQUIRE (fib (13, 0, 1) == 144); // 13'th == 144
    
}


