
#include <stdio.h>

const char* checkSign(int n) {
    if (n > 0) return "Positive";
    else if (n < 0) return "Negative";
    else return "Zero";
}

int main() {
    int n = -3;
    printf("%d is %s\n", n, checkSign(n));
    return 0;
}
