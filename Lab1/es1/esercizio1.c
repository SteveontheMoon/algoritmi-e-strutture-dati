/*Esercizio 1 laboratorio 28-09-2021 */
#include <stdio.h>

int test(int n){
    int f = 0;
    int f0 = 1;
    int f1 = 0;
    while (n >= 1){
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
    printf("Primo 10 numeri della sequenza di Fibonacci: ");
    for(int i = 0; i <= 10; i++){
        q = test(i);
        printf("%d, ", q);
    }
    printf("\n");
}