#include <stdio.h>

const int LIMIT = 4000000;

int main() {
    int solution = evenFibonacci(1,1);
    printf("The solution is %d", solution);
    return 0;
}

int evenFibonacci(int previous, int current) {
    int swap, result = 0;
    while (current <= LIMIT) {
        if (current % 2 == 0) {
            result += current;
        }
        swap = current;
        current += previous;
        previous = swap;
    }
    return result;
}
