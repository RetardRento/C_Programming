#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);

    while(t--){
        int k;
        scanf("%d",&k);

        int count = 0;
        int num = 1;

        while(count < k) {
            if(num % 3 != 0 && num % 10 != 3) {
                count++;
            }
            num++;
        }

        printf("%d\n",num-1);
    }
    return 0;
}