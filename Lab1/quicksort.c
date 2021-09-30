/*Alberto Malagamba - esercizio 2 - lezione laboratorio 1*/
#include <stdio.h>

void bubblesort(int[]);
int main(){
    int list[10] = {32, 5, 11, 33, 8, 43, 28, 79, 99, 17};
    bubblesort(list);
    return 0;
}

void bubblesort(int list[]){
    int i, j, temp; /*j = singolo elemento dell'array. temp = variable per lo swap*/
    int n = 10; /*Numero totale di elementi nell'array*/
    for(i = 0; i < n - 1; i++){ /*Ripetuto tante volte quante gli elementi dell'array*/
        for(j = 0; j < n - 1; j++){ 
            if(list[j] > list[j+1]){
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    for(i = 0; i < n; i++){
        printf(" %d \0.5t", list[i]);
    }
    printf("\n");
    }
}