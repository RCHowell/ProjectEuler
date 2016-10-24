// @author R. C. Howell
// @question 3
// @lang C
// @solution 6857

/**
What is the largest prime factor of the number 600851475143?
**/

#include <stdlib.h>
#include <stdio.h>


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

    long int n = 600851475143;
    long int greatestPrime;

    int done = 0;
    long int i = 2;
    while (!done) {
        if (!(n % i)) {
            if (isPrime(n/i)) {
                greatestPrime = n/i;
                done = 1;
            }
        }
        i++;
    }
    printf("%li\n", greatestPrime);
    return 0;
}