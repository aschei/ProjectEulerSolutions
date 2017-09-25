#include <string.h>
#include <stdio.h>
#include <stdlib.h>


long solve(long number);

int main(int argc, char *argv[]) {
    long number = 1000;
    if (argc == 2) {
        number = atol(argv[1]);
    }
    long solution = solve(number);
    printf("The solution for %ld is %ld", number, solution);
    return 0;
}

long solve(long number) {
    for (long a = 0; a < number; a++) {
        for (long b= a+1; b< number; b++) {
            long c = 1000-a-b;
            if (c<=b) {
                break;
            }
            if (a*a+b*b==c*c) {
                printf("Found %ld + %ld + %ld = 1000\n", a, b, c);
                return a*b*c;
            }
        }
    }
    return 0;
}

