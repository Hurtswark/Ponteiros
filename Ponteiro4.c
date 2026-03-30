#include <stdio.h>

int definirValor(int x){
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);
    return x;
}

void trocarValores(int *pa, int *pb){
    int temp = *pa;
    *pa = *pb;
    *pb = temp;

}
int main(){

    int a = 0, b = 0;
    a = definirValor(a);
    b = definirValor(b);
    int *pa = &a, *pb = &b;
    trocarValores(pa, pb);

    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);
}