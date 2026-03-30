#include <stdio.h>

void preencherVetor(int *pvet,int tamanho,int num){
    for(int i = 0; i < tamanho; i++){
        *pvet = num; // atribui o valor num ao elemento apontado por pvet
        pvet++; // move o ponteiro para o próximo elemento do vetor
    }
    
}
int main(){
    int vet[3];
    int *pvet = vet; // ponteiro para o primeiro elemento do vetor
    preencherVetor(pvet,3,5);

    for(int i = 0; i < 3;i++){
        printf("Valor do elemento [%d]: %d\n",i , pvet[i]); // acessa o valor usando o ponteiro
    }
}