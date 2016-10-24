// @author R. C. Howell
// @question 4
// @lang C
// @solution 906609

/*
Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdlib.h>
#include <stdio.h>

int nthdigit(int n, int x)
{
    static int powersof10[] = {1, 10, 100, 1000, 10000, 100000};
    return ((int)(n / powersof10[x]) % 10);
}

int check(int n) {
    return (
        nthdigit(n, 0) == nthdigit(n, 5) &&
        nthdigit(n, 1) == nthdigit(n, 4) &&
        nthdigit(n, 2) == nthdigit(n, 3)
    );
}

int nextPalindrome(int n) {
    if (nthdigit(n, 2) == 0) {
        n += 9900;
        n -= 10010;
        return n;
    } else if (nthdigit(n, 1) == 0) {
        n += 90090;
        n -= 100001;
        return n;
    } else {
        n -= 1100;
        return n;
    }
}


int main(int argc, char * argv[]) {

    int done = 0;
    int max = 0;
    int multiplicand, multiplier, product;


    for (multiplicand = 999; multiplicand > 0; multiplicand--) {
        for (multiplier = 999; multiplier > 0; multiplier--) {
            product = multiplicand * multiplier;
            if (check(product) && product > max) max = product;
        }
    }

    printf("Solution: %d\n", max);
    return 0;
}