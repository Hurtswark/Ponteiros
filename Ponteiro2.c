#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;
    int *pA = &a;
    int *pB = &b;

    if(pA > pB){
        printf("pA aponta para um endereço maior que pB\n");
        printf("Endereço de pA: %p\n", pA);
        printf("Endereço de pB: %p\n", pB);

    } else if(pA < pB){
        printf("pA aponta para um endereço menor que pB\n");
        printf("Endereço de pA: %p\n", pA);
        printf("Endereço de pB: %p\n", pB);
    } else {
        printf("pA e pB apontam para o mesmo endereço\n");
        printf("Endereço de pA: %p\n", pA);
        printf("Endereço de pB: %p\n", pB);
    }
    return 0;
}
