#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void Verifica(int *vet, int *maior, int *repetido){
    *maior = -9999;
    *repetido = 0;

    for(int i = 0; i < 5;i++){
        if(vet[i] > *maior){
            *maior = vet[i];
            *repetido = 1;
        }

        else if(vet[i] == *maior){
            (*repetido)++;
        }
    }
}

int main(){

    int vet[5] = {1,2,3,5,5};
    int maior, repetido;

    Verifica(vet, &maior, &repetido);


    printf("O maior valor é: %d\n", maior);
    printf("O maior valor se repete %d vezes\n", repetido);
}