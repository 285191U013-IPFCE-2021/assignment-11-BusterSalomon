/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
// Pre: Accepts an integer n that is larger than 0
// p should be 0, and pp should be 1, as it is the first two fibonacci numbers
int fib (int n, int p, int pp) {

    // Pre
    // -1 is used instead of assert, to test the out of bounds handling in the test cases
    if (n < 1) return -1;

    // Base cases
    if (n == 2) return pp;
    if (n == 1) return p;

    // Recursive case
    else return fib (n - 1, pp, pp + p);
    
}
