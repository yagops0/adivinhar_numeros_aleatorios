#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>
#include "menus.h"
#include "funcoesNumeros.h"

int main(){
    int tamanho;
    int chuteUsuario, numeroEscolhidoPc, escolhaSequencia;
    char continuar;

    linha();
    printf("\nADIVINHAR NUMEROS ALEATORIOS");
    linha();

    
    do
    {
        fflush(stdin);
        menuEscolhas();
        printf("\nDigite a opcao que deseja: ");
        scanf("%d", &escolhaSequencia);
        switch(escolhaSequencia)
        {
            case 1:
                tamanho = 5;
                break;
            case 2:
                tamanho = 10;
                break;
            case 3:
                tamanho = 50;
                break;
            case 4:
                tamanho = 100;
                break;
            default:
                printf("\nOpcao invalida.");
        }

        menuDentroEscolha(escolhaSequencia);

        int arrayDesordenado[tamanho];
        int arrayOrdenado[tamanho];

        printf("\nGerando e embaralhando os numeros...");
        Sleep(10);

        preenchimentoArray(arrayDesordenado, tamanho);

        printf("\n");

        mostrarArray(arrayDesordenado, tamanho);

        selectionSort(arrayDesordenado, tamanho);

        for(int i = 0; i < tamanho; i++){
            arrayOrdenado[i] = arrayDesordenado[i];
        }

        //imprimirArrays(arrayOrdenado, tamanho);

        linha();
        printf("\nJOGANDO");
        linha();

        numeroEscolhidoPc = escolherNumeroAleatorio(tamanho);

        printf("\nNumero escolhido pc para debug: %d", numeroEscolhidoPc);


        adivinhacaoBinaria(numeroEscolhidoPc, tamanho);
        
                
        fflush(stdin);
        printf("\nDeseja continuar a jogar?\n");
        scanf("%c", &continuar);
    } while (toupper(continuar) == 'S');

    printf("\nObrigado por usar o programa!");

    return 0;
    
}