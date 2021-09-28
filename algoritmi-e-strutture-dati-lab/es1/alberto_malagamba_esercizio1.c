#include <stdio.h>

int test(int n){
    int f = 0;
    int f0 = 0;
    int f1 = 1;
    while (n >= 0){
        n--;
        if (n=1) {

        }
        f = f0 + f1;
        f0 = f1;
        f1 = f;
    }
    return f;
}

int main(void){
    int n;
    int q;

    for(int i = 10; i >= 0; i--){
        q = test(i);
        printf("%d, ", q);
    }
    printf("\n");
}