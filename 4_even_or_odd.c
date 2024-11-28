
#include <stdio.h>

const char* evenOrOdd(int n) {
    return n % 2 == 0 ? "Even" : "Odd";
}

int main() {
    int n = 4;
    printf("%d is %s\n", n, evenOrOdd(n));
    return 0;
}
