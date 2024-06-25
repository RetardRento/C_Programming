#include <stdio.h>

int main() {
    int a = 10, b = 12;
    printf("%d %d",a,b);
    
    a = a^b;
    b = a^b;
    a = a^b;
    
    printf("\n");
    printf("%d %d",a,b);

    return 0;
}