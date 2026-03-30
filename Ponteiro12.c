#include <stdio.h>

int definirValor(int x){
    printf("Digite um valor inteiro:");
    scanf("%d", &x);
    return x;

}

int ordenarValores(int *pa, int *pb, int *pc){
    if(*pa == *pb && *pb == *pc){
        return 1;
    }

    if(*pa > *pb){
        int temp = *pa;
        *pa = *pb;
        *pb = temp;
    }

    if(*pa > *pc){
        int temp = *pa;
        *pa = *pc;
        *pc = temp;
    }

    if(*pb > *pc){
        int temp = *pb;
        *pb = *pc;
        *pc = temp;
    }
    return 0;
}

int main(){
    int a,b,c;
    int *pa = &a, *pb = &b, *pc = &c;
    a = definirValor(a);
    b = definirValor(b);
    c = definirValor(c);

    int resultado = ordenarValores(pa, pb, pc);

    if(resultado == 1){
        printf("Os valores são iguais\n");
        printf("Valor de a: %d\n", a);
        printf("Valor de b: %d\n", b);
        printf("Valor de c: %d\n", c);
    } else {
        printf("Valores ordenados em ordem crescente:\n");
        printf("Valor de a: %d\n", a);
        printf("Valor de b: %d\n", b);
        printf("Valor de c: %d\n", c);
    }

    

}