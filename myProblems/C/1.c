// @author R. C. Howell
// @question 1
// @lang C
// @solution 233168

/**
Find the sum of all the multiples of 3 or 5 below 1000.
**/

#include <stdlib.h>
#include <stdio.h>

#define MAX 1000

// naive solution
int main(int argc, char * argv[]) {
    int total = 0;
    int i = 0;
    while ((++i) < MAX) {
        total += (!(i%3) || !(i%5)) ? i : 0;
    }
    printf("%d\n", total);

    return 0;
}