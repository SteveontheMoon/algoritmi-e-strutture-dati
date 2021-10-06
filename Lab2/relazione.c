#include <stdio.h>

void printArray(int* a, int dim);

int main() {
    int arr[] = {1,7,0,6,4};
    int i, indexMin=0, indexMax=0;

    printArray(arr, 5);

    for(i = 1; i < sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i] < arr[indexMin])
            indexMin = i;

        else if (arr[i] > arr[indexMax])
            indexMax = i;
    }

    printf("Valore minimo: %d con indice %d\n", arr[indexMin], indexMin);
    printf("Valore massimo: %d con indice %d\n", arr[indexMax], indexMax);

    return 0;
}

void printArray(int* a, int dim){
    int i;

    for(i = 0; i < dim; i++){
        if(i != dim-1)
            printf("%d - ", a[i]);
        else
            printf("%d", a[i]);
    }
    printf("\n");
}