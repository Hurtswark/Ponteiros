#include <stdio.h>

void preencherVetor(int *vet[5]){
    for(int i = 0; i < 5;i++){
        printf("Digite um valor para o elemento [%d]:",i);
        scanf("%d",vet[i]); // lê o valor diretamente para o endereço do elemento
    }
}

void imprimirDobro(int *vet[5]){
    for(int i = 0; i < 5;i++){
        printf("Dobro do elemento [%d]: %d\n",i, (*vet[i]) * 2); // acessa o valor usando o ponteiro e imprime o dobro
    }
}

int main(){
    int *vet[5]; // vetor de ponteiros para inteiro
    int a,b,c,d,e;
    vet[0] = &a;
    vet[1] = &b;
    vet[2] = &c;
    vet[3] = &d;
    vet[4] = &e;
    preencherVetor(vet);
    imprimirDobro(vet);

}