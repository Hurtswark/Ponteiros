#include <stdio.h>

int main(){
    int a = 10;
    float b = 3.14;
    char c = 'A';
    int *pA = &a;
    float *pB = &b;
    char *pC = &c;

    printf("Valor de a: %d\n", a);
    printf("Valor de b: %.2f\n", b);
    printf("Valor de c: %c\n", c);

    *pA = 20;
    *pB = 6.28;
    *pC = 'B';

    printf("Novo valor de a: %d\n", a);
    printf("Novo valor de b: %.2f\n", b);
    printf("Novo valor de c: %c\n", c);
}