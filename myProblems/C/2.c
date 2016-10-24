// @author R. C. Howell
// @question 2
// @lang C
// @solution 4613732

/**
By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
**/

#include <stdlib.h>
#include <stdio.h>

#define MAX 4000000

// naive solution
int main(int argc, char * argv[]) {

    unsigned int total = 0;
    unsigned int currentValue = 1;
    unsigned int oldValue = 1;
    unsigned int temp;

    while (currentValue < MAX) {
        if (!(currentValue%2)) total += currentValue;
        temp = currentValue;
        currentValue += oldValue;
        oldValue = temp;
    }

    printf("%d\n", total);
    return 0;
}