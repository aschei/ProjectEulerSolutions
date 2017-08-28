#include <stdio.h>
#include <stdlib.h>
#ifndef max
    #define max( a, b ) ( ((a) > (b)) ? (a) : (b) )
#endif


long solve(long number);

int main(int argc, char *argv[]) {
    long number = 600851475143;
    if (argc == 2) {
        number = atol(argv[1]);
    }
    long solution = solve(number);
    printf("The solution is %ld", solution);
    return 0;
}

long solve(long number) {
    long current = 2;
    while (current * current < number) {
        if (number % current == 0) {
            return max(current, solve(number / current));
        }
        current++;
    }
    return number;
}
