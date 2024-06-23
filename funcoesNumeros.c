#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <windows.h>
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

void adivinhacaoBinaria(int numeroEscolhido, int tam) {
    int baixo = 0;
    int alto = tam - 1;
    int chuteUser;
    int tentativas = 0;

    printf("\nEstou pensando em um numero entre 1 e %d. Tente adivinhar!", tam);
    Sleep(10);

    while (baixo <= alto) {
        printf("Digite seu palpite: ");
        scanf("%d", &chuteUser);
        tentativas++;

        if (chuteUser == numeroEscolhido) {
            printf("\nParabens! Voce acertou em %d tentativas!!\n", tentativas);
            return;
        }
        if (chuteUser < numeroEscolhido) {
            printf("O numero pensado e maior.\n");
            baixo = chuteUser + 1;
        } else {
            printf("O numero pensado e menor.\n");
            alto = chuteUser - 1;
        }
    }

    printf("\nVoce nao conseguiu encontrar o numero.\n");
}


//Função para retornar o número do array que o computador escolheu aleatoriamente
int escolherNumeroAleatorio(int tam){
    int numeroEscolhido = rand() % tam + 1;
    return numeroEscolhido;
}

bool jaExisteNoArray(int array[], int tam, int numero) {
    for (int i = 0; i < tam; i++) {
        if (array[i] == numero) {
            return true; // Retorna verdadeiro se o número já existe no array
        }
    }
    return false; // Retorna falso se o número não existe no array
}


void preenchimentoArray(int array[], int tam){
    for(int i = 0; i < tam; i++){
        int numeroAleatorio;
        do
        {
            numeroAleatorio = escolherNumeroAleatorio(tam);
        } while (jaExisteNoArray(array, tam, numeroAleatorio));
        array[i] = numeroAleatorio;
    }
}
