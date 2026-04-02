#include <stdio.h>

int somaVetores(int *vet1, int *vet2, int tamanhoA, int tamanhoB, int *vet3){

    if(tamanhoA != tamanhoB){
        return 0;
    }

    for(int i = 0; i < tamanhoA; i++){
        vet3[i] = vet1[i] + vet2[i];
    }

    return 1;
}

int main(){
    int vet1[5] = {1, -2, 3, -4, 5};
    int vet2[5] = {6, 7, 8, 9, 10};
    int vet3[5] = {0};
    int tamanhoA = 5, tamanhoB = 5;
    
    somaVetores(vet1,vet2,tamanhoA,tamanhoB,vet3);

    for(int i = 0; i < 5; i++){
        printf("Valor do elemento [%d]: %d\n", i, vet3[i]);
    }
}