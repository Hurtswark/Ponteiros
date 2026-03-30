#include <stdio.h>

int main() {
    float vet[10];
    float *pvet = vet; // ponteiro para o primeiro elemento do vetor

    for(int i = 0; i < 3; i++){
        printf("Digite um valor para o elemento %d: ",i);
        scanf("%f", &pvet[i]); // lê o valor diretamente para o endereço do elemento
    }

    for(int i = 0; i < 3;i++){
        printf("Valor do elemento [%d]: %2.2f",i , pvet[i]); // acessa o valor usando o ponteiro
        printf(" - Endereço do elemento [%d]: %p\n",i , &pvet[i]); // imprime o endereço do elemento
    }

}