#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void selectionSort(int arr[], int quantElementos){
    for(int i = 0; i < quantElementos; i++){
        int indMenor = i;
        for(int j = i + 1; j < quantElementos; j++){
            if(arr[j] < arr[indMenor]){
                indMenor = j;
            }
        }

        int aux = arr[indMenor];
        arr[indMenor] = arr[i];
        arr[i] = aux;
    }
}

int main(){
    int numeros[MAX] = {10, 45, 98, 6, 12};
    int arrayOrdenado[MAX];
    printf("\nARRAY NORMAL: ");
    for(int i = 0; i < MAX; i++){
        printf("\t%d", numeros[i]);
    }

    selectionSort(numeros, MAX);



    printf("\n\nARRAY ORDENADO: ");
    for(int i = 0; i < MAX; i++){
        arrayOrdenado[i] = numeros[i];
        printf("\t%d", numeros[i]);

    }

    printf("\nARRAY FDS: ");
    for (int i = 0; i < MAX; i++)
    {
        printf("\t%d", arrayOrdenado[i]);
    }
    



    return 0;
}