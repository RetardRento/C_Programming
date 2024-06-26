#include <stdio.h>

int main() {
    int n,m,u=0,a=0;
    scanf("%d", &n);

    // int events[n];
    // for(int i = 0; i < n; i++) {
    //     scanf("%d", &events[i]);
    // }

    // int u = 0;
    // int a = 0;

    // for(int i = 0; i < n; i++)
    // {

    //     if (events[i] == -1) {
    //         if(a == 0){
    //             u++;
    //         } else {
    //             a--;
    //         }
    //     }
    //     else {
    //         a += events[i];
    //     }

    // }
    for(int i =0; i <n; i++){
        scanf("%d",&m);
        if (m < 0){
            if (a > 0) {
                a--;
            } else {
                u++;
            }
        } else {
            a += m;
        }
    }


    printf("%d",u);

    return 0;

}