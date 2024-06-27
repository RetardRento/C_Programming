#include <stdio.h>

int main() {
    int n, m, a, b;
    scanf("%d %d %d %d", &n, &m, &a, &b);

    int minSum = 0;
    if (m * a <= b) {
        minSum = n * a;
    } else {
        minSum = (n / m) * b + (n % m) * a;
        if ((n % m) * a > b) {
            minSum = (n / m) * b + b;
        }
    }

    printf("%d\n", minSum);

    return 0;
}