#include <string.h>
#include <stdio.h>
#include <stdlib.h>


long solve(long number);
int isPrime(long number);

int main(int argc, char *argv[]) {
    long number = 10001;
    if (argc == 2) {
        number = atol(argv[1]);
    }
    long solution = solve(number);
    printf("The solution for %ld is %ld", number, solution);
    return 0;
}

long solve(long number) {
    long foundPrimes=0, currentNumber=1;
    while (foundPrimes<number) {
        currentNumber++;
        if (isPrime(currentNumber)) {
            foundPrimes++;
        }
    }
    return currentNumber;
}

int isPrime(long number) {
    long i = 2;
    while (i*i<= number) {
        if (number % i == 0) {
            return 0;
        }
        i++;
    }
    return 1;
}

