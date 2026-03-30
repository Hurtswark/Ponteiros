#include <stdio.h>

int definirValor(int x){
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);
    return x;
}

int verificarMaior(int *pa, int *pb){
    if(*pa > *pb){
        return 1;
    } else if(*pa < *pb){
        int temp = *pa;
        *pa = *pb;
        *pb = temp;
        return 2;

    } else {
        return 0;
    }
}

int main(){
    int a = 0, b = 0;
    a = definirValor(a);
    b = definirValor(b);
    int *pa = &a, *pb = &b;
    int resultado = verificarMaior(pa,pb);

    if(resultado == 1){
        printf("a é maior que b\n");
        printf("Valor de a: %d\n", a);
        printf("Valor de b: %d\n", b);
    } else if(resultado == 2){
        printf("b é maior que a\n");
        printf("Valor de a: %d\n", a);
        printf("Valor de b: %d\n", b);
    } else {
        printf("a e b são iguais\n");
        printf("Valor de a: %d\n", a);
        printf("Valor de b: %d\n", b);
    }
}