#include <stdio.h>
#include "menus.h"


void linha(){
    printf("\n================================");
}

void menuEscolhas(){
    linha();
    printf("\n= Escolha o intervalo de numeros que deseja adivinhar: ");
    printf("\n = 1 - de 1 a 5"); 
    printf("\n = 2 - de 1 a 10");
    printf("\n = 3 - de 1 a 50");
    printf("\n = 4 - de 1 a 100");
    linha();
}

void menuDentroEscolha(int escolha){
    if(escolha == 1){
        printf("\nSequencia de 1 a 5 escolhida.");
    }
    else if(escolha == 2){
        printf("\nSequencia de 1 a 10 escolhida.");
    }
    else if(escolha == 3){
        printf("\nSequencia de 1 a 50 escolhida.");
    }   
    else if(escolha == 4){
        printf("\nSequencia de 1 a 100 escolhida.");
    }
    else{
        printf("\nEste opcao nao esta disponivel.");
    }
}

void mostrarArray(int array[], int tam){
    linha();
    printf("\nSequencia de numeros desordenada: ");
    linha();
    for(int i = 0; i < tam; i++){
        printf("\t%d", array[i]);
    }
    linha();
}

void imprimirArrays(int array[], int tam){
    for(int i = 0; i < tam; i++){
        printf("\t%d", array[i]);
    }
}