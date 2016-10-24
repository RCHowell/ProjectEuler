// @author R. C. Howell
// @question 6
// @lang C
// @solution 25164150

/*
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <stdlib.h>
#include <stdio.h>

#define N 100

int main(int argc, char * argv[]) {

    long int a = (N*(N+1))/2;
    long int squareOfSum = a * a;

    long int sumOfSquares = 0;
    int i;
    for (i = 1; i <= N; i++) {
        sumOfSquares += i * i;
    }
    printf("Solution: %ld\n", squareOfSum - sumOfSquares);
    return 0;
}