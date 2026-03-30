#include <stdio.h>

int definirValor(int x){
    printf("Digite um valor inteiro:");
    scanf("%d", &x);
    return x;

}

int somadobraValor(int *pa,int *pb){
    *pa = *pa * 2;
    *pb = *pb * 2;
    return (*pa * 2) + (*pb * 2);

}

int main(){
    int a = 0, b = 0;
    a = definirValor(a);
    b = definirValor(b);
    int *pa = &a, *pb = &b;
    int resultado = somadobraValor(pa,pb);

    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);
    printf("Resultado da soma do dobro de a e b: %d\n", resultado);



}