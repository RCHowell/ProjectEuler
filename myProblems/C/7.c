// @author R. C. Howell
// @question 7
// @lang C
// @solution 104743

/*
What is the 10 001st prime number?
*/

#include <stdlib.h>
#include <stdio.h>

int isPrime(long int);

int main(int argc, char * argv[]) {

    int n = 10001;
    int val = 1;
    int counter = 1;
    while (counter < n) {
        val += 2;
        if (isPrime(val)) counter++;
    }

    printf("%dth prime is %d\n", n, val);
    return 0;
}

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