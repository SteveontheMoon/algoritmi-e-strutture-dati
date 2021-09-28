#include <stdio.h>
/*Implementazione del frammento dell'esercizio 1*/
int test(int n){
    int f = 0;
    int f0 = 0;
    int f1 = 1;
    while (n > 1){
        n--;
        f = f0 + f1;
        f0 = f1;
        f1 = f;
    }
    return f;
}

int main(void){
    int n;
    int q;
    for(int i = 0; i <= 6; i++){
        q = test(i);
        printf("%d, ", q);
    }
    printf("\n");
}