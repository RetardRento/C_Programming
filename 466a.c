#include <stdio.h>

int main() {
    int n, m, a, b;
    scanf("%d %d %d %d", &n, &m, &a, &b);

    int cost = 0;
    if (m * a <= b) {
        cost = n * a;
    } else {
        cost = ((n / m) * b) + ((n % m) * a);
        if ((n % m) * a > b) {
            // cost
            cost = ((n / m) * b) + b;
        }
    }

    printf("%d\n", cost);

    return 0;
}

