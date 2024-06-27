#include <stdio.h>


int main() {
    int x;
    scanf("%d", &x);

    // Divide by 5 and add 1 if there's a remainder
    int steps = (x + 4) / 5;

    printf("%d\n", steps);
    return 0;
}
