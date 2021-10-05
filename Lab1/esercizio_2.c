/*Esercizio 2 - lezione laboratorio 1*/
#include <stdio.h>

int main(){
    int list[10] = {32, 5, 11, 33, 8, 43, 28, 79, 99, 17};
    int i, j, temp;
    int n = 10;

    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - 1; j++){
            if(list[j] > list[j+1]){
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
    for(i = 0; i < n; i++){
        printf(" %d \t", list[i]);
    }
    printf("\n");
return 0;
}

/* Controllare se esegue un ciclio senza spostamenti, in tal caso ferma il programma. */