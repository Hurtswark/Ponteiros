#include <stdlib.h>
#include <stdio.h>

int definirValor(int x){
    printf("Digite um valor inteiro:");
    scanf("%d", &x);
    return x;

}

void somarValores(int *pa, int *pb){
    *pa = *pa + *pb;
}


int main(){
    int a = 0, b = 0;
    a = definirValor(a);
    b = definirValor(b);
    int *pa = &a, *pb = &b;
    somarValores(pa,pb);

    printf("Novo valor de a: %d\n", *pa);

}