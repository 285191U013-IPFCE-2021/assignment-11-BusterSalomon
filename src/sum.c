#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n) {
	/* pre-condition */
	assert (n >= 1);
	/* post-condition */
	if (n > 1)
		return n + sum (n - 1);
	else
		return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total) {
    // Pre
	// -1 is used instead of assert, to test the out of bounds handling in the test cases
    if (n < 0) return -1;

    // Base cases
    if (n == 0) return 0;
    if (n == 1) return n + total;

    // Recursive case
    else return sumtail (n - 1, n + total); 
}

/* Sum integers 1 to n */
int sumwhile (int n) {
    // Pre
	// -1 is used instead of assert, to test the out of bounds handling in the test cases
    if (n < 0) return -1;

    // Loop
    int sum = 0;
    while (n >= 0) {
        sum += n;
        n--;
    }
    return sum;
}

