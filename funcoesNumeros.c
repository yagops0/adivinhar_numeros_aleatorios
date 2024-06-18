#include "funcoesNumeros.h"

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

