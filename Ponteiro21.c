#include <stdio.h>

int main(){
    int vet[5] = {1, -2, 3, -4, 5};
    int* pvet = vet; 

    for(int i = 0; i < 5; i++){
        pvet[i] +=1; 
    }

    for(int i = 0; i < 5; i++){
        printf("Valor do elemento [%d]: %d\n", i, pvet[i]); 
    }
}