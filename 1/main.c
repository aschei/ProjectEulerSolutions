#include <stdio.h>

int main(int argc, char *argv[]) {
    int limit = 1000;
    if (argc == 2) {
        limit = atoi(argv[1]);
    }
    int solution = solve(limit);


    printf("The solution is %d", solution);
    return 0;
}

int solve(int limit) {
    int result = 0;
    int current = 0;
    while (current < limit) {
        if ((current % 3 == 0) || (current % 5 == 0)) {
            result += current;
        }
        current++;
    }
    return result;
}
