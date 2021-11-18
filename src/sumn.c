#include "sumn.h"

#include<stdio.h>

int sumn (int n) {
    
    // Pre
    // -1 is used instead of assert, to test the out of bounds handling in the test cases
    if (n < 1) return -1;

    // Base case - same as n == 1
    if (n == 1) return 1;
    
    // Recursive cases
    else return  (2 * n - 1) + sumn (n-1);

}