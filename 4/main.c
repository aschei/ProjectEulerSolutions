#include <string.h>
#include <stdio.h>
#include <stdlib.h>


long solve(long min, long max);
int isPalindrome(long number);

int main(int argc, char *argv[]) {
    long min = 10;
    long max = 99;
    if (argc == 3) {
        min = atol(argv[1]);
        max = atol(argv[2]);
    }
    long solution = solve(min, max);
    printf("The solution is %ld", solution);
    return 0;
}

long solve(long min, long max) {
    long currentMax = 0;
    for (long a = max; a>=min; a--) {
        for (long b = a; b>=min; b--) {
            long prod = a * b;
            if (prod<=currentMax) {
                break;
            }
            if (isPalindrome(prod)) {
                printf("%ld * %ld = %ld\n", a, b, prod);
                if (prod > currentMax) {
                    currentMax = prod;
                }
            }
        }
    }
    return currentMax;
}

int isPalindrome(long number) {
    char numberString[64];
    sprintf(numberString, "%ld", number);
    int len = strlen(numberString);
    for (int i=0; i<len/2; i++) {
        if (numberString[i]!=numberString[len-1-i]) {
            return 0;
        }
    }
    return 1;
}
