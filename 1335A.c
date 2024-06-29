#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        if (n % 2 != 0) {
            printf("0\n");
            continue;
        }

        int ways = (n / 2) - 1;
        printf("%d\n", ways);
    }

    return 0;
}