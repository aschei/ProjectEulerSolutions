#include <string.h>
#include <stdio.h>
#include <stdlib.h>


long solve(long number);

int main(int argc, char *argv[]) {
    long number = 100;
    if (argc == 2) {
        number = atol(argv[1]);
    }
    long solution = solve(number);
    printf("The solution for %ld is %ld", number, solution);
    return 0;
}

long solve(long number) {
    long sum=0, qsum = 0;
    for (long a = 1; a<=number; a++) {
        sum += a;
        qsum += a*a;
    }
    printf("sum is %ld, qsum is %ld.", sum, qsum);
    return sum*sum - qsum;
}

