#include <stdio.h>


int main(){
    int vet[3] = {0,1,2}; 
    int *pvet = vet; // ponteiro para o primeiro elemento do vetor
    int tamanho = 3;

    for(int i = 0; i < tamanho; i++){
        int resultado = *pvet;
        printf("Valor do elemento [%d]: %d\n",i , resultado); // acessa o valor usando o ponteiro
        pvet++; // move o ponteiro para o próximo elemento do vetor
    }

}