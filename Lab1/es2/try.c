#include <stdio.h>
int main()
{
    int a[100], number, i, j, temp;
    printf("Total number of rlements: \n");
    scanf("%d", &number);
    printf("Array elements: \n");
    for(i = 0; i < number; i++)
        scanf("\t %d", &a[i]);
    for(i = 0; i < number - 1; i++){
        for(j = 0; j < number - i - 1; j++){
            if(a[j] > a[j + 1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("List Sorted: \n");
    for(i = 0; i < number; i++)
    {
        printf(" %d \t", a[i]);
    }
    printf("\n");
    return 0;
}