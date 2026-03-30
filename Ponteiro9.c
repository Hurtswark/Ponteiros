#include <stdio.h>

void preencherMatriz(float (*pmat)[3]){
    for(int i = 0; i < 3;i++){
        for(int j = 0; j < 3;j++){
            printf("Digite um valor para a posição [%d][%d]: ",i,j);
            scanf("%f", &pmat[i][j]); // lê o valor diretamente para o endereço do elemento
        }
    }
}
int main(){

    float mat[3][3];
    float (*pmat)[3] = mat; // ponteiro para o primeiro elemento da matriz

    preencherMatriz(mat);

    for(int i = 0; i < 3;i++){
        for(int j = 0; j < 3;j++){
            printf("Valor da posição [%d][%d]: %2.2f",i,j , pmat[i][j]); // acessa o valor usando o ponteiro
            printf(" - Endereço da posição [%d][%d]: %p\n",i,j , &pmat[i][j]); // imprime o endereço do elemento
        }
    }
    
}