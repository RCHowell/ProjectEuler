// @author R. C. Howell
// @question 9
// @lang C
// @solution 31875000

/**
There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc
**/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define MAX 1000

int coPrime(int, int);
int gcd(int, int);

int main(int argc, char * argv[]) {
    
    int a = 500;
    float b;

    //printf("Coprime: %d\n", coPrime(96, 247));
    do {
        b = (1000.0f*a - 500000.0f) / (a - 1000.0f);
        a--;
    } while (b <= 0 || ceilf(b) != b || !coPrime(a, (int)b));

    printf("a: %d b: %d\n", ++a , (int)b);
    printf("abc = %d\n", (a * (int)b * (1000 - (int)b - a)));

    return 0;
}

int coPrime(int a, int b) {
    return (gcd(b, a) == 1);
}

// Euclid's gcd algorithm
int gcd(int m, int n) {
    if (m % n == 0) {
        return n;
    } else {
        return gcd(n, m % n);
    }
}