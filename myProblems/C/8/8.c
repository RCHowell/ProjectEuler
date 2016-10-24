// @author R. C. Howell
// @question 8
// @lang C
// @solution 23514624000

/**
* Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?
**/

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

#define LENGTH 1000
#define Section  13

int digits[LENGTH];
long int max = 0;

int main(int argc, char * argv[]) {

    // Load Digits
    FILE *file;
    file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Couldn't open file. Error: %d\n", errno);
        return 1;
    }

    // Build Digit Array
    int i = 0;
    char c;
    while ((c = fgetc(file)) != EOF) {
        digits[i] = c - '0';
        i++;
    }

    i = 0;
    int j;
    long int product = 1;
    while (i + 13 < LENGTH) {
        product = 1;
        for (j = 0; j < 13; j++) {
            product *= digits[i + j];
        }
        if (product > max) max = product;
        i++;
    }

    printf("Max: %ld\n", max);
    return 0;
}