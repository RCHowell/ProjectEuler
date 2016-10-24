// @author R. C. Howell
// @question 10
// @lang C
// @solution 142913828922

/**
Find the sum of all the primes below two million.
**/

#include <stdlib.h>
#include <stdio.h>

#define N 2000000

// naive primality test
int isPrime(long int n) {
    if (n <= 1) return 0;
    else if (n <= 3) return 1;
    else if (!(n % 2) || !(n % 3)) return 0;
    long int i = 5;
    while (i * i <= n) {
        if (!(n%i) || !(n%(i+2))) return 0;
        i += 6;
    }
    return 1;
}

int main(int argc, char * argv[]) {

    long int total = 0;
    int i = 2;

    while (i < N) { 
        if (isPrime(i)) total += i;
        i++;
    }

    printf("%li\n", total);
    return 0;
}