#include <stdio.h>

int negativos (float *vet,int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(vet[i] < 0){
            count++;
        }
    }

    return count;
}

int main(){
    float vet[5] = {1.0, -2.5, 3.0, -4.0, 5.0};
    int n = 5;

    printf("O número de elementos negativos no vetor é: %d\n", negativos(vet, n));
}